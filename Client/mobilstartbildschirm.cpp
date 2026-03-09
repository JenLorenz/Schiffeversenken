#include "mobilstartbildschirm.h"
#include "ui_mobilstartbildschirm.h"

MobilStartbildschirm::MobilStartbildschirm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MobilStartbildschirm)
{
    ui->setupUi(this);
}

MobilStartbildschirm::~MobilStartbildschirm()
{
    delete ui;
}
