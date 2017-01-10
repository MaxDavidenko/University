#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     highlighter = new Highlighter(ui->plainTxtSource->document());
     ui->plainTxtSource->setContextMenuPolicy(Qt::CustomContextMenu);
      connect(ui->plainTxtSource,SIGNAL(customContextMenuRequested(const QPoint&)),this,SLOT(showContextMenu(const QPoint &)));

}


void MainWindow::closeEvent(QCloseEvent *event)
{
    QEvent eventc = QEvent(QEvent::Clipboard);
    QApplication::sendEvent(QApplication::clipboard(),&eventc);
    event->accept();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete highlighter;
}
void MainWindow::showContextMenu(const QPoint &pt)
{
    QMenu *menu = ui->plainTxtSource->createStandardContextMenu();

    QAction *refactoringExplicit = new QAction("Refactoring->Explicit");
    connect(refactoringExplicit,&QAction::triggered,this,&MainWindow::on_refactoringExplicit_clicked);
    menu->addAction(refactoringExplicit);
    menu->exec(ui->plainTxtSource->mapToGlobal(pt));
    delete menu;
}


void MainWindow::on_pbExplicitProc_clicked()
{
    QClipboard *clipb = QApplication::clipboard();
    QString lastText = clipb->text(QClipboard::Clipboard);
    clipb->clear(QClipboard::Clipboard);
    ui->plainTxtSource->copy();
    QString selected= clipb->text(QClipboard::Clipboard);
    clipb->setText(lastText,QClipboard::Clipboard);
    QString source = ui->plainTxtSource->toPlainText();
    QString name = ui->lnName->text();
    ui->plainTxtSource->setPlainText( refactor.explicitProcedure(source.toStdString(),selected.toStdString(),name.toStdString()).c_str());
}
void MainWindow::on_refactoringExplicit_clicked()
{
    QClipboard *clipb = QApplication::clipboard();
    QString lastText = clipb->text(QClipboard::Clipboard);
    clipb->clear(QClipboard::Clipboard);
    ui->plainTxtSource->copy();
    QString selected= clipb->text(QClipboard::Clipboard);
    clipb->setText(lastText,QClipboard::Clipboard);
    QString source = ui->plainTxtSource->toPlainText();
    QString name = ui->lnName->text();
    ui->plainTxtSource->setPlainText( refactor.explicitProcedure(source.toStdString(),selected.toStdString(),name.toStdString()).c_str());
}

void MainWindow::on_buttonRename_clicked()
{
    ui->plainTxtSource->setPlainText(refactor.rename(ui->plainTxtSource->toPlainText(), ui->leditSourseVar->text(), ui->leditResultVar->text()));
}

void MainWindow::on_formatCodeButton_clicked()
{
    ui->plainTxtSource->setPlainText(refactor.formatting(ui->plainTxtSource->toPlainText()));
}
