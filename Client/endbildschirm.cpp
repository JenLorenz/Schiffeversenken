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
