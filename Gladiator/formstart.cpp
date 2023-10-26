#include "formstart.h"
#include "ui_formstart.h"

FormStart::FormStart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormStart)
{
    ui->setupUi(this);
}

FormStart::~FormStart()
{
    delete ui;
}
