#include "mobilschiffeplatzieren.h"
#include "ui_mobilschiffeplatzieren.h"

mobilschiffeplatzieren::mobilschiffeplatzieren(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mobilschiffeplatzieren)
{
    ui->setupUi(this);
}

mobilschiffeplatzieren::~mobilschiffeplatzieren()
{
    delete ui;
}
