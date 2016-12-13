#include "widget.h"
#include "ui_widget.h"
#include "refactor.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    highlighter = new Highlighter(ui->teditSourceCode->document());
    //connect(ui->teditSourceCode, SIGNAL()
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_buttonRename_clicked()
{
    Refactor renamer;
    ui->teditSourceCode->setText(renamer.rename(ui->teditSourceCode->toPlainText(), ui->leditSourseVar->text(), ui->leditResultVar->text()));
}


void Widget::on_formatCodeButton_clicked()
{
    Refactor refactor;
    ui->teditSourceCode->setText(refactor.formatting(ui->teditSourceCode->toPlainText()));

}
