#include "Startbildschirm.h"
#include "ui_Startbildschirm.h"
#include "spieler.h"
#include "schiffeplatzieren.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::exsistiertEinSpiel(){
    /*Es wird eine Anfrage an den Server gestellt und gefragt ob ein Spiel bereits exsestiert:
     Wenn ja -> button Spielbeitreten wird aktivert. Spielerstellen ist deaktiviert
     Wenn nein -> button Spiel erstellen wird aktiviert. Spielbeitreten ist deaktiviert*/

    return false;
}

void MainWindow::on_SpielErstellen_clicked(bool checked)
{
    if(checked == true){
        //Anfrage für ein neues Spiel wird an Server geschickt und ein Spieler wird übergeben. Player wird auf die Seite Schiffeplatzieren weitergeleitet
        Schiffeplatzieren *schiffeplatz = new Schiffeplatzieren();
        schiffeplatz->show();
        schiffeplatz->raise();
        schiffeplatz->activateWindow();
    }
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    /*Der vom Player eingebene Name wird aus dem Textfeld ausgelesen und ein Spieler wird für den Player erstelltt.*/
    QString textValue = ui->lineEdit->text();
    std::string playername = textValue.toStdString();
    Spieler player(playername);
}


void MainWindow::on_SpielBeitreten_clicked(const QString &argg1)
{
    Schiffeplatzieren *schiffeplatz = new Schiffeplatzieren();
    schiffeplatz->show();
    schiffeplatz->raise();
    schiffeplatz->activateWindow();
    /*Beim clicken wird der erstellte Spieler dem Server übergeben und der Player wird
     zur Seite Schiffeplatzieren weitergeleitet.
    */
}

