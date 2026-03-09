#ifndef MOBILENDBILDSCHIRM_H
#define MOBILENDBILDSCHIRM_H

#include <QWidget>

namespace Ui {
class mobilEndbildschirm;
}

class mobilEndbildschirm : public QWidget
{
    Q_OBJECT

public:
    explicit mobilEndbildschirm(QWidget *parent = nullptr);
    ~mobilEndbildschirm();

private:
    Ui::mobilEndbildschirm *ui;
};

#endif // MOBILENDBILDSCHIRM_H
