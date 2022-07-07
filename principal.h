#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_pushButton_released();

    void on_actionCalcular_triggered();

private:
    Ui::Principal *ui;

    void calcular();
};
#endif // PRINCIPAL_H
