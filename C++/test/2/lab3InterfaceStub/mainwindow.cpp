#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_settings.h"
#include <QVBoxLayout>
#include <QFileDialog>
#include <QTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionSettings, SIGNAL(triggered()), this, SLOT(showSettingPanel()));
    QObject::connect(ui->Canvas, SIGNAL(changeToDefaultCursor()), this, SLOT(changeGlobalCursor()));

}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::changeGlobalCursor()
{
    this->setCursor(Qt::ArrowCursor);
}

void MainWindow::showSettingPanel()
{
    QWidget * widget = new QWidget();
    QPropertyAnimation * animation = new QPropertyAnimation(widget,"windowOpacity");
    Ui::Form ui2;
    ui2.setupUi(widget);
    QObject::connect(ui2.listWidget, SIGNAL(currentRowChanged(int)),
                     ui2.stackedWidget, SLOT(setCurrentIndex(int)));
    widget->setGeometry(100,100,100,100);
    animation->setDuration(1000);
    animation->setStartValue(0.0);
    animation->setEndValue(1.0);
    animation->setEasingCurve(QEasingCurve::OutBack);
    animation->start();
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
void MainWindow::on_createClassDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createNewDiagramOfPrecendenceButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createNewDiagramOfPrecendenceButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createNewDiagramOfPrecendenceButton.png.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}
