#ifndef SCHIFFEPLATZIEREN_H
#define SCHIFFEPLATZIEREN_H

#include <QWidget>

namespace Ui {
class Schiffeplatzieren;
}

class Schiffeplatzieren : public QWidget
{
    Q_OBJECT

public:
    explicit Schiffeplatzieren(QWidget *parent = nullptr);
    ~Schiffeplatzieren();

private:
    Ui::Schiffeplatzieren *ui;
};

#endif // SCHIFFEPLATZIEREN_H
