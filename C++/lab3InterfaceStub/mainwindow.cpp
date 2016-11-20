#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_settings.h"
#include <QVBoxLayout>
#include <QFileDialog>
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
    QWidget * widget = new QWidget(this);
    Ui::Form ui2;
    ui2.setupUi(widget);
    QObject::connect(ui2.listWidget, SIGNAL(currentRowChanged(int)),
                     ui2.stackedWidget, SLOT(setCurrentIndex(int)));
    widget->setGeometry(100,100,100,100);
    widget->show();
}

void MainWindow::on_saveButton_clicked()
{
    QFileDialog saveDialog;
    saveDialog.getSaveFileName(this,"Save files", QDir::currentPath());
}

void MainWindow::on_OpenButton_clicked()
{
    QFileDialog openDialog;
    openDialog.getOpenFileNames(this, "Open files", QDir::currentPath());
}

void MainWindow::on_exportProjectButton_clicked()
{
    QFileDialog exportDialog;
    exportDialog.getSaveFileName(this,"Export files", QDir::currentPath(), "*.jpeg *.bmp *.png *.svg *.pdf");

}

void MainWindow::on_createNewFileButton_clicked()
{
    QFileDialog createNewtDialog;
    createNewtDialog.getSaveFileName(this,"Create new file", QDir::currentPath(), "*.suml");
}

void MainWindow::on_settingsButton_clicked()
{
    showSettingPanel();
}
void MainWindow::generateCodeDialogCall()
{
    QFileDialog generateCodeDialog;
    generateCodeDialog.getSaveFileName(this,"Generate code", QDir::currentPath(), "*.cpp *.java *.py");
}
