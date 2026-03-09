#ifndef ENDBILDSCHIRM_H
#define ENDBILDSCHIRM_H

#include <QWidget>

namespace Ui {
class Endbildschirm;
}

class Endbildschirm : public QWidget
{
    Q_OBJECT

public:
    explicit Endbildschirm(QWidget *parent = nullptr);
    ~Endbildschirm();

private:
    Ui::Endbildschirm *ui;
};

#endif // ENDBILDSCHIRM_H
