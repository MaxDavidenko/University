#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->plainTextEdit->toPlainText();
    ui->plainTextEdit->clear();
    ui->plainTextEdit->setPlainText(refactor.formatting(text));
}
