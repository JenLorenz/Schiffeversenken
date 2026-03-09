#include "mobilspielfeld.h"
#include "ui_mobilspielfeld.h"

mobilspielfeld::mobilspielfeld(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mobilspielfeld)
{
    ui->setupUi(this);
}

mobilspielfeld::~mobilspielfeld()
{
    delete ui;
}
