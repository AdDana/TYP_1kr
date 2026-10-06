#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_sum_clicked()
{
    QString text_1 = ui->lineEdit_value1->text();
    QString text_2 = ui->lineEdit_value2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1);
    int value_2 = text_2.toInt(&correct_2);

    if(correct_1 && correct_2)
    {
        int sum = value_1 + value_2;
        QString result = QString::number(sum);

        ui->label_result_value->setText(result);
    }
    else
    {
    ui->label_result_value->setText("Error");
    }

}


void MainWindow::on_pushButton_sub_clicked()
{
    QString text_1 = ui->lineEdit_value1->text();
    QString text_2 = ui->lineEdit_value2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1);
    int value_2 = text_2.toInt(&correct_2);

    if (correct_1 && correct_2)
    {
        int sub = value_1 - value_2;
        QString result = QString::number(sub);

        ui->label_result_value->setText(result);
    }
    else
    {
        ui->label_result_value->setText("Error");
    }
}


void MainWindow::on_pushButton_mul_clicked()
{
    QString text_1 = ui->lineEdit_value1->text();
    QString text_2 = ui->lineEdit_value2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1);
    int value_2 = text_2.toInt(&correct_2);

    if (correct_1 && correct_2)
    {
        int mul = value_1 * value_2;
        QString result = QString::number(mul);

        ui->label_result_value->setText(result);
    }
    else
    {
        ui->label_result_value->setText("Error");
    }
}

void MainWindow::on_pushButton_div_clicked()
{
    QString text_1 = ui->lineEdit_value1->text();
    QString text_2 = ui->lineEdit_value2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1);
    int value_2 = text_2.toInt(&correct_2);

    if ((correct_1 && correct_2) && (value_2 != 0))
    {
        double div = static_cast<double>(value_1) / value_2;
        QString result = QString::number(div);

        ui->label_result_value->setText(result);
    }
    else
    {
        ui->label_result_value->setText("Error");
    }
}
