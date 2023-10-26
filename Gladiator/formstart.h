#ifndef FORMSTART_H
#define FORMSTART_H

#include <QMainWindow>

namespace Ui {
class FormStart;
}

class FormStart : public QMainWindow
{
    Q_OBJECT

public:
    explicit FormStart(QWidget *parent = 0);
    ~FormStart();

private:
    Ui::FormStart *ui;
};

#endif // FORMSTART_H
