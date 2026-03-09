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
