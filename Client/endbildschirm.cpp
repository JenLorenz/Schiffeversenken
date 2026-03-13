#include "endbildschirm.h"
#include "ui_endbildschirm.h"

Endbildschirm::Endbildschirm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Endbildschirm)
{
    ui->setupUi(this);
}

Endbildschirm::~Endbildschirm()
{
    delete ui;
}

void Endbildschirm::on_pushButton_clicked()
{
  //Wenn der Button geklickt wird der Player zurück auf die Seite Startbildschirm geleitet.
}


void Endbildschirm::on_pushButton_2_clicked()
{
//Wenn der Button geklickt wird begint eine Neue Runde vom Spiel mit dem gleichen Gegner
}


void Endbildschirm::on_textBrowser_textChanged()
{
    //Erhält vom Server die Infomration ob der Player gewonnen oder verloren hat und stellt diese da..
}

