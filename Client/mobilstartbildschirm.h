#ifndef MOBILSTARTBILDSCHIRM_H
#define MOBILSTARTBILDSCHIRM_H

#include <QWidget>

namespace Ui {
class MobilStartbildschirm;
}

class MobilStartbildschirm : public QWidget
{
    Q_OBJECT

public:
    explicit MobilStartbildschirm(QWidget *parent = nullptr);
    ~MobilStartbildschirm();

private:
    Ui::MobilStartbildschirm *ui;
};

#endif // MOBILSTARTBILDSCHIRM_H
