#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_settings.h"
#include "ui_createnewdialog.h"
#include "ui_newproject.h"
#include <QVBoxLayout>
#include <QFileDialog>
#include <QTimer>
#include <QMessageBox>
#include <customdialog.h>
#include "CustomStackedWidget.h"
#include <memory>
#include <QScopedPointer>
#include "NewProjectMasterCreator.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionSettings, SIGNAL(triggered()), this, SLOT(showSettingPanel()));
    QObject::connect(ui->Canvas, SIGNAL(changeToDefaultCursor()), this, SLOT(changeGlobalCursor()));
    QObject::connect(ui->actionGenerate_code_for_project, SIGNAL(triggered(bool)),
                     this, SLOT(generateCodeDialogCall()));

}
void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, this->objectName(),
                                                                   tr("Are you sure save your project?\n"),
                                                                   QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                   QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes)
    {
        event->ignore();
    }
    else
    {
        event->accept();
    }
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

    QWidget * widget(new QWidget());
    widget->setAttribute(Qt::WA_DeleteOnClose);
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

void MainWindow::showDialogMenu()
{
    QFileDialog saveDialog;
    saveDialog.getSaveFileName(this,"Save files", QDir::currentPath());

}

void MainWindow::on_saveButton_clicked()
{
    QFileDialog saveDialog;
    saveDialog.getSaveFileName(this,"Save files", QDir::currentPath(), "*.suml");
     QMessageBox::critical(this, this->objectName(),
                                 tr("Error to save a file.\n"
                                 "Choose another name!\n"),
                                 QMessageBox::Ok);

}

void MainWindow::on_OpenButton_clicked()
{
    QFileDialog openDialog;
    openDialog.getOpenFileNames(this, "Open files", QDir::currentPath(), "*.suml");
}

void MainWindow::on_exportProjectButton_clicked()
{
    QFileDialog exportDialog;
    exportDialog.getSaveFileName(this,"Export files", QDir::currentPath(), "*.jpeg *.bmp *.png *.svg *.pdf");
    QMessageBox::critical(this, this->objectName(),
                                tr("Error occured while file is exporting\n"
                                "Choose another name!\n"),
                                QMessageBox::Ok);
}

void MainWindow::on_createNewFileButton_clicked()
{

    NewProjectMasterCreator * widget = new NewProjectMasterCreator();
    widget->setAttribute(Qt::WA_DeleteOnClose);
    QPropertyAnimation * animation = new QPropertyAnimation(widget,"windowOpacity");
    widget->setGeometry(100,100,100,100);
    animation->setDuration(1000);
    animation->setStartValue(0.0);
    animation->setEndValue(1.0);
    animation->setEasingCurve(QEasingCurve::OutBack);
    animation->start();
    widget->show();

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
        QPixmap pixmap(":/new/prefix1/gallery/createClassDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createNewDiagramOfPrecendenceButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createNewDiagramOfPrecendenceButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}


void MainWindow::on_createSequenceDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createSequenceDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }

}

void MainWindow::on_createCommunicationDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createCommunicationDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createStateDiagramButton_toggled(bool checked)
{

    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createStateDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createActivityDiagramButton_toggled(bool checked)
{

    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createActivityDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createDeployDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createDeployDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addDiagramPacketButton_toggled(bool checked)
{

    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addDiagramPacketButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addClassOnDiagrammButton_toggled(bool checked)
{

    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addClassOnDiagrammButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addAssociationLinkButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addAssociationLinkButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}


void MainWindow::on_addAgregationLinkButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addAgregationLinkButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addCompositionLinkButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addCompositionLinkButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addFiniteLinkButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addFiniteLinkButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addGeneralizationLinkButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addGeneralizationLinkButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addNewInterfaceOnDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addNewInterfaceOnDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addRealizationLinkOnDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addRealizationLinkOnDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createNewAttributeButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createNewAttributeButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createNewOperationButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createNewOperationButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_createAssociationClassButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/createAssociationClassButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addCommentOnDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addCommentOnDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}

void MainWindow::on_addCommentLingOnDiagramButton_toggled(bool checked)
{
    if (checked)
    {
        QPixmap pixmap(":/new/prefix1/gallery/addCommentLingOnDiagramButton.png");
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
}
