#ifndef STARTBILDSCHIRM_H
#define STARTBILDSCHIRM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool exsistiertEinSpiel();

private slots:

    void on_SpielErstellen_clicked(bool checked);

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // STARTBILDSCHIRM_H
