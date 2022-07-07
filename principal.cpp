#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_pushButton_released()
{

    calcular();
}

void Principal::on_actionCalcular_triggered()
{
    calcular();
}

void Principal::calcular()
{
    double num1 = ui->in1->value();
    double num2 = ui->in2->value();

    double resultado  = 0.0;

    switch (ui->operaciones->currentIndex()) {

    case 0:
        resultado = num1 + num2;
        break;
    case 1:
        resultado = num1 * num2;
        break;
    case 2:
        resultado = num1 - num2;
        break;
    case 3:
        resultado = num1 / num2;
        break;
    default:
        break;
    }

    QMessageBox::information(this,
                             tr("Calculo"),
                             tr("Elresultado es: %1").arg(resultado));

}
