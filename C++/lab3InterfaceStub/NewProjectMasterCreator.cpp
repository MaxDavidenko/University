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
    QObject::connect(ui->NextPageButton, SIGNAL(clicked(bool)), ui->stackedWidget,
                     SLOT(setNextPage()));
    QObject::connect(ui->PrevPageButton, SIGNAL(clicked(bool)), ui->stackedWidget,
                     SLOT(setPrevPage()));
    QObject::connect(ui->CancelButton, SIGNAL(clicked(bool)), this, SLOT(close()));
    QObject::connect(ui->stackedWidget, SIGNAL(closeDialog()), this, SLOT(close()));
    QObject::connect(ui->stackedWidget, SIGNAL(changeNextButtonToFinish(QString)), ui->NextPageButton,
                     SLOT(setWindowTitle(QString)));
    QObject::connect(ui->NextPageButton, SIGNAL(clicked(bool)), ui->listWidget,
                     SLOT(changeNextRowIcon()));
    QObject::connect(ui->PrevPageButton, SIGNAL(clicked(bool)), ui->listWidget,
                     SLOT(changePrevRowIcon()));
    QObject::connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(setTemplateInfo()));

    QObject::connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)),
                     this, SLOT(setCodeReverseIngeneeringInfo()));
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
    /*QString currStr = ui->comboBox_2->currentText();
    if (currStr == "C++")
        ui->labelSourceCode->setText(ui->comboBox_2->currentText() + QString(".h"));
    else if (ui->comboBox_2->currentText() == "C#")
        ui->labelSourceCode->setText(ui->comboBox_2->currentText() + QString(".sharpina"));
    else if (ui->comboBox_2->currentText() == "Java")
        ui->labelSourceCode->setText(ui->comboBox_2->currentText() +QString(".java"));*/
}
