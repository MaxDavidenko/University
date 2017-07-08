#include "NewProjectMasterCreator.h"
#include "ui_newproject.h"
#include <QFileDialog>
NewProjectMasterCreator::NewProjectMasterCreator(QWidget *parent):
    QWidget(parent),
    ui(new Ui::NewProjectForm)

{
    ui->setupUi(this);
    this->setWindowTitle("New Project Master");
    ui->listWidget->addItem(QString("New project"));
    ui->listWidget->addItem(QString("From template"));
    ui->listWidget->addItem(QString("From code"));
    ui->listWidget->addItem(QString("Summary"));
    ui->listWidget->setCurrentRow(0);
    for (int i = 0; i < ui->listWidget->count();++i){
        ui->listWidget->item(i)->setIcon(QIcon(":new/prefix1/gallery/transparent.png"));
    }
    ui->listWidget->currentItem()->setIcon(QIcon(":new/prefix1/gallery/arrow.png"));
    QObject::connect(ui->NextPageButton, SIGNAL(clicked(bool)), ui->listWidget,
                     SLOT(changeNextRowIcon()));
    QObject::connect(ui->PrevPageButton, SIGNAL(clicked(bool)), ui->listWidget,
                     SLOT(changePrevRowIcon()));
    QObject::connect(ui->comboBox, SIGNAL(currentIndexChanged(int)),
                     this, SLOT(setTemplateInfo()));
    QObject::connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)),
                     this, SLOT(setCodeReverseIngeneeringInfo()));
    QObject::connect(ui->projectPathLine, SIGNAL(editingFinished()),
                     this, SLOT(checkFieldsOnEmpty()));
}

void NewProjectMasterCreator::on_pushBrowsePathButton_clicked()
{
    QFileDialog fileDialog;

    QString result = fileDialog.getSaveFileName(this, "New project",
                                                QDir::currentPath(), "*.suml");
    int fileNameStartPosition = result.lastIndexOf(QRegExp("\\/")) + 1;
    ui->projectNameLine->setText(result.mid(
         fileNameStartPosition ,result.size() - fileNameStartPosition));
    result.remove(fileNameStartPosition, result.size() - fileNameStartPosition);
    ui->projectPathLine->setText(result);
    ui->labelFileName->setText(ui->projectNameLine->text());
    ui->labelFilePath->setText(ui->projectPathLine->text());
}


void NewProjectMasterCreator::on_BrowseCodeButton_clicked()
{
    QFileDialog fileDialog;
    QString result = fileDialog.getOpenFileName(this, "New project",
                                                QDir::currentPath());
    ui->lineEdit->setText(result);
    ui->labelSourceCode->setText(result);
}

void NewProjectMasterCreator::setTemplateInfo()
{
    ui->labelTemplate->setText(ui->comboBox->currentText());
}
void NewProjectMasterCreator::setCodeReverseIngeneeringInfo()
{

}

void NewProjectMasterCreator::checkFieldsOnEmpty()
{
    QPalette pal1 = ui->projectNameLine->palette();
    pal1.setColor(ui->projectNameLine->backgroundRole(), Qt::red);
    QPalette pal2 = ui->projectPathLine->palette();
    pal2.setColor(ui->projectPathLine->backgroundRole(), Qt::red);

    if (ui->projectNameLine->text() == "")
        ui->projectNameLine->setStyleSheet("background-color: #c70000");
    else
    {
        pal1.setColor(QPalette::Base, Qt::white);
        ui->projectNameLine->setPalette(pal1);
        ui->projectNameLine->setStyleSheet("background-color: #ffffff");

    }

    if (ui->projectPathLine->text() == "")
    {
        ui->projectPathLine->setStyleSheet("background-color: #c70000");
    }
    else
    {
        pal2.setColor(QPalette::Base, Qt::white);
        ui->projectPathLine->setPalette(pal2);
        ui->projectPathLine->setStyleSheet("background-color: #ffffff");
    }
}

void NewProjectMasterCreator::on_NextPageButton_clicked()
{
    if (ui->stackedWidget->currentIndex() == 1 &&
            (ui->projectNameLine->text() == "" ||
             ui->projectPathLine->text() == ""))
    {
        checkFieldsOnEmpty();
        ui->listWidget->setCurrentRow(ui->listWidget->currentRow() -1);
        return;
    }
    if (ui->stackedWidget->currentIndex() == ui->stackedWidget->count() -1)
        this->close();
    if (ui->stackedWidget->currentIndex() < ui->stackedWidget->count())
    {
        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() + 1);
        if (ui->stackedWidget->currentIndex() == ui->stackedWidget->count() -1)
            ui->NextPageButton->setText("Finish");
        else
            ui->NextPageButton->setText("Next");
    }
}

void NewProjectMasterCreator::on_PrevPageButton_clicked()
{
    if (ui->stackedWidget->currentIndex() > 0)
        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() - 1);
}

void NewProjectMasterCreator::on_CancelButton_clicked()
{
    this->close();
}
