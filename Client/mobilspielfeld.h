#ifndef MOBILSPIELFELD_H
#define MOBILSPIELFELD_H

#include <QWidget>

namespace Ui {
class mobilspielfeld;
}

class mobilspielfeld : public QWidget
{
    Q_OBJECT

public:
    explicit mobilspielfeld(QWidget *parent = nullptr);
    ~mobilspielfeld();

private:
    Ui::mobilspielfeld *ui;
};

#endif // MOBILSPIELFELD_H
