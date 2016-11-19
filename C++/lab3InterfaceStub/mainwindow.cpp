#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_settings.h"
#include <QVBoxLayout>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionSettings, SIGNAL(triggered()), this, SLOT(showSettingPanel()));
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::showSettingPanel()
{
    QWidget * widget = new QWidget();
    Ui::Form ui2;
    ui2.setupUi(widget);
    QObject::connect(ui2.listWidget, SIGNAL(currentRowChanged(int)),
                     ui2.stackedWidget, SLOT(setCurrentIndex(int)));
    widget->show();
}
