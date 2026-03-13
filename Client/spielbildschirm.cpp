#include "spielbildschirm.h"
#include "ui_spielbildschirm.h"

Spielbildschirm::Spielbildschirm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Spielbildschirm)
{
    ui->setupUi(this);
}

Spielbildschirm::~Spielbildschirm()
{
    delete ui;
}

void Spielbildschirm::on_keySequenceEdit_editingFinished()
{
    //Es wird das Feld des Gegners das abgeschossen werden soll gesetzt
}


void Spielbildschirm::on_pushButton_4_clicked()
{
    //Das Feld was vom Gegner abgeschossen werden soll wird an den Server weitergeleitet
}

