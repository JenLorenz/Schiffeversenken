#ifndef MOBILSCHIFFEPLATZIEREN_H
#define MOBILSCHIFFEPLATZIEREN_H

#include <QWidget>

namespace Ui {
class mobilschiffeplatzieren;
}

class mobilschiffeplatzieren : public QWidget
{
    Q_OBJECT

public:
    explicit mobilschiffeplatzieren(QWidget *parent = nullptr);
    ~mobilschiffeplatzieren();

private:
    Ui::mobilschiffeplatzieren *ui;
};

#endif // MOBILSCHIFFEPLATZIEREN_H
