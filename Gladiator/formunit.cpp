#include "formunit.h"
#include "ui_formunit.h"

FormUnit::FormUnit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormUnit)
{
    ui->setupUi(this);
}

FormUnit::~FormUnit()
{
    delete ui;
}
