#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

#include "formstart.h"
#include "formunit.h"


class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    FormStart* formStart{nullptr};
    FormUnit* formUnit{nullptr};

    void startApp();

signals:

public slots:
};

#endif // CONTROLLER_H
