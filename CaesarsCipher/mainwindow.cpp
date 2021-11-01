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


void MainWindow::on_pushButton_clicked()
{
    QString text = ui->TextInput->toPlainText();
    int key = ui->spinBox->value();
    QString result = cipher.Encrypt(text,key);
    ui->TextResult->setText(result);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString text = ui->TextInput->toPlainText();
    int key = ui->spinBox->value();
    QString result = cipher.Decrypt(text,key);
    ui->TextResult->setText(result);
}
