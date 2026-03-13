#include "schiffeplatzieren.h"
#include "ui_schiffeplatzieren.h"

Schiffeplatzieren::Schiffeplatzieren(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Schiffeplatzieren)
{
    ui->setupUi(this);
}

Schiffeplatzieren::~Schiffeplatzieren()
{
    delete ui;
}

void Schiffeplatzieren::on_comboBox_currentIndexChanged(int index)
{
    //Es wird ein Schiff platziert
}


void Schiffeplatzieren::on_pushButton_clicked()
{
    //Die Platzierung des Schiffes wird besstätigt und beim Spielfeld des spielers eingetragen und ees wird ein update an den Server gesendet.
}


void Schiffeplatzieren::on_pushButton_3_clicked()
{

}

