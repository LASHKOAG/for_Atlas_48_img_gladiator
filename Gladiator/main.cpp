#include "formstart.h"
#include <QApplication>

#include "controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controller *controller = new Controller();
    controller->startApp();
    return a.exec();

    if (controller != nullptr)
    {
        delete controller;
    }
}
