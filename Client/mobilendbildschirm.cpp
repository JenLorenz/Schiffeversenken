#include "mobilendbildschirm.h"
#include "ui_mobilendbildschirm.h"

mobilEndbildschirm::mobilEndbildschirm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mobilEndbildschirm)
{
    ui->setupUi(this);
}

mobilEndbildschirm::~mobilEndbildschirm()
{
    delete ui;
}
