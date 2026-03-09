#ifndef SPIELBILDSCHIRM_H
#define SPIELBILDSCHIRM_H

#include <QWidget>

namespace Ui {
class Spielbildschirm;
}

class Spielbildschirm : public QWidget
{
    Q_OBJECT

public:
    explicit Spielbildschirm(QWidget *parent = nullptr);
    ~Spielbildschirm();

private:
    Ui::Spielbildschirm *ui;
};

#endif // SPIELBILDSCHIRM_H
