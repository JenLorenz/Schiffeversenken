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

void MainWindow::on_NamenEingabe_editingFinished()
{
//    std::string name = QKeySequence->toString();
  //  Spieler player (name);
}


void MainWindow::on_SpielErstellen_clicked(bool checked)
{
    if(checked == true){
        //Anfrage an neues Spiel wird an Server geschickt
        Schiffeplatzieren *schiffeplatz = new Schiffeplatzieren();
        schiffeplatz->show();
        schiffeplatz->raise();
        schiffeplatz->activateWindow();
    }
}

