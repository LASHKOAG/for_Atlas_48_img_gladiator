#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    formStart = new FormStart();
    formUnit = new FormUnit();
}

Controller::~Controller()
{
    if (formStart != nullptr)
    {
        delete formStart;
    }

    if (formUnit != nullptr)
    {
        delete formUnit;
    }
}

void Controller::startApp()
{
    formStart->show();
}
