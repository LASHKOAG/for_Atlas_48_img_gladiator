#ifndef FORMUNIT_H
#define FORMUNIT_H

#include <QWidget>

namespace Ui {
class FormUnit;
}

class FormUnit : public QWidget
{
    Q_OBJECT

public:
    explicit FormUnit(QWidget *parent = 0);
    ~FormUnit();

private:
    Ui::FormUnit *ui;
};

#endif // FORMUNIT_H
