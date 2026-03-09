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
