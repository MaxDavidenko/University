#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "modelFromFile.h"
#include "helpdialog.h"

#include <QStandardItem>
#include <QTextStream>
#include <QFileInfo>
#include <QTimer>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QShortcut>
#include <QFileDialog>
#include <QPropertyAnimation>
#include <QDesktopWidget>
#include <QPicture>

static QString g_optionFilePath = "/proc/binperm/options";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget_3->setVisible(false);
    this->setWindowTitle ("Linux Application Firewall");
    t = new QTimer(this);
    QShortcut * shortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_F), this);
    QString proclist("/proc/binperm/tasklst");
    QString blacklist("/proc/binperm/blacklist");
    procModel.reset(new ModelWrapperFromFile(proclist));
    blModel.reset(new ModelWrapperFromFile(blacklist));
    bmodel=new QSortFilterProxyModel(this);
    pmodel=new QSortFilterProxyModel(this);
    //===============================================
    connect(ui->refresh, SIGNAL(clicked()), this, SLOT(onRefreshAction()));
    connect(t, SIGNAL(timeout()), this, SLOT(onRefreshAction()));
    //===============================================
    //Menu slots
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(onExitAction()));
    connect(ui->action1_sec, SIGNAL(triggered()), this, SLOT(onAutoRefreshIn1SecAction()));
    connect(ui->action5_sec, SIGNAL(triggered()), this, SLOT(onAutoRefreshIn5SecAction()));
    connect(ui->action10sec, SIGNAL(triggered()), this, SLOT(onAutoRefreshIn10SecAction()));
    connect(ui->action30_sec, SIGNAL(triggered()), this, SLOT(onAutoRefreshIn30SecAction()));
    connect(ui->action1_min, SIGNAL(triggered()), this, SLOT(onAutoRefreshIn1MinAction()));
    connect(ui->actionNever, SIGNAL(triggered()), this, SLOT(onAutoRefreshInNeverAction()));
    connect(ui->actionSearch, SIGNAL(triggered()), this, SLOT(onSearchAction()));
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(onAboutAction()));
    connect(ui->actionHelp, SIGNAL(triggered()), this, SLOT(onHelpAction()));
    connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(on_lineEdit_textChanged(QString)));
    connect(shortcut, SIGNAL(activated()), this, SLOT(onSearchAction()));

    bmodel->setSourceModel(blModel->getModel());
    pmodel->setSourceModel(procModel->getModel());
    ui->taskView->setModel(pmodel);
    ui->blacklistView->setModel(bmodel);
    setViewOptions(ui->taskView);
    setViewOptions(ui->blacklistView);

    displayModuleOptions(getOption());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::uncheckAllItems(QList<QAction*> list)
{
      for (QList<QAction *>::iterator iter = list.begin(); iter != list.end();++iter)
        (*iter)->setChecked(false);
}


void MainWindow::onRefreshAction()
{
    //proclist refresh
    QModelIndexList indexes = ui->taskView->selectionModel()->selectedRows();
    int row = -1;
    if (indexes.size() > 0) row = indexes.first().row();
    pmodel->setSourceModel(procModel->getModel());
    ui->taskView->selectRow(row);
    ui->taskView->resizeRowsToContents();
    //blacklist refresh
    indexes = ui->blacklistView->selectionModel()->selectedRows();
    row=-1;
    if (indexes.size() > 0) row=indexes.first().row();

    bmodel->setSourceModel(blModel->getModel());
    ui->blacklistView->selectRow(row);
    ui->blacklistView->resizeRowsToContents();
}
void MainWindow::onAutoRefreshIn1SecAction()
{    
    uncheckAllItems(ui->menuAutoRefresh->actions());
    ui->action1_sec->setChecked (true);
    t->stop();
    t->setInterval(1000);
    t->start();
}
void MainWindow::onAutoRefreshIn5SecAction()
{
    uncheckAllItems(ui->menuAutoRefresh->actions());
    ui->action5_sec->setChecked (true);
    t->stop();
    t->setInterval(5000);
    t->start();
}
void MainWindow::onAutoRefreshIn10SecAction()
{
    uncheckAllItems(ui->menuAutoRefresh->actions());
    ui->action10sec->setChecked (true);
    t->stop();
    t->setInterval(10000);
    t->start();
}
void MainWindow::onAutoRefreshIn30SecAction()
{
    uncheckAllItems(ui->menuAutoRefresh->actions());
    ui->action30_sec->setChecked (true);
    t->stop();
    t->setInterval(30000);
    t->start();
}
void MainWindow::onAutoRefreshIn1MinAction()
{
    uncheckAllItems(ui->menuAutoRefresh->actions());
    ui->action1_sec->setChecked (true);
    t->stop();
    t->setInterval(60000);
    t->start();
}
void MainWindow::onAutoRefreshInNeverAction()
{
    t->stop();
}
void MainWindow::onHelpAction()
{
    HelpDialog helpdialog;
    helpdialog.exec();
}

void MainWindow::onAboutAction()
{
    QMessageBox msgBox;
    QPalette palette;

    msgBox.setWindowTitle("About");
    palette.setBrush(QPalette::Background,QBrush(QImage(":res1/img.png")));
    msgBox.setPalette(palette);
    msgBox.setText("<h1>Linux application firewall</h1>\n\n<h3>Authors: Alena Khaliukova, Max Davidenko</h3> <h4> Stable version, Build 1.0</h4>");
    msgBox.exec();

}
void MainWindow::onSearchAction()
{
    int maxWidth = ui->centralWidget->width();
        if (!ui->widget_3->isVisible()) {
            QPropertyAnimation *animation = new QPropertyAnimation(ui->widget_3,"geometry");
            animation->setDuration(150);
            animation->setStartValue(QRect(0, 0, maxWidth, 0));
            animation->setEndValue(QRect(0,0, maxWidth, ui->widget_3->maximumHeight()));
            animation->start();
            on_lineEdit_textChanged(ui->lineEdit->text());
            ui->lineEdit->setFocus();
            ui->widget_3->show();
       }
        else {
              QPropertyAnimation *animation = new QPropertyAnimation(ui->widget_3,"geometry");
              animation->setDuration(150);
              animation->setEndValue (QRect(0, 0, maxWidth, 0 ));
              animation->setStartValue (QRect(0,0, maxWidth, ui->widget_3->maximumHeight()));
              animation->start();
              on_lineEdit_textChanged("");
              connect(animation, SIGNAL(finished()),ui->widget_3, SLOT(hide()));
        }
}
void MainWindow::onExitAction()
{
    exit(0);
}
void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    QRegExp reg(arg1,Qt::CaseInsensitive);
    pmodel->setFilterKeyColumn(2);
    pmodel->setFilterRegExp(reg);
    bmodel->setFilterRegExp(reg);
}
void MainWindow::setViewOptions(QTableView *tableView)
{
    tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeRowsToContents();
}

void MainWindow::on_cleanBlacklist_clicked()
{
    QString str("clean");
    blModel->writeToFile(str, false);
    onRefreshAction();
}

void MainWindow::on_terminate_clicked()
{

    foreach(const QModelIndex &ind, ui->taskView->selectionModel()->selectedIndexes()) {
       if(!isValid(ind))
           break;
       QModelIndex index = pmodel->mapToSource(pmodel->index(ind.row(),0));
       QString path = index.data(Qt::DisplayRole).toString();
       procModel->writeToFile(path, false);
    }

   onRefreshAction();
}

bool MainWindow::isValid(const QModelIndex &ind)
{
    QModelIndex index = pmodel->mapToSource(pmodel->index(ind.row(),2));
    QString path = index.data(Qt::DisplayRole).toString();
    if(path == QCoreApplication::applicationFilePath() || path == "/sbin/init")
    {
        QMessageBox message(QMessageBox::Icon(), "Invalid path", "You couldn't add to blacklist "
                            "or terminate file \"" + path + "\"", QMessageBox::Ok);
        message.exec();
        return false;
    }

    return true;
}

void MainWindow::writeOption(int option)
{
     QFile file(g_optionFilePath);
     file.open(QIODevice::WriteOnly | QIODevice::Text);
     QTextStream out(&file);
     out << option <<"\n";
     file.close();
}

int MainWindow::getOption()
{
    QFile file(g_optionFilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return -1;
    }
    QTextStream textStream(&file);
    int option = -1;
    QString str = textStream.readLine();
    option = str.toInt();
    file.close();
    return option;
}

void MainWindow::displayModuleOptions(int option)
{
    QPixmap picture;
    QSize picSize(20,20);

    switch(option)
    {
    case 0:
        picture = QPixmap(":res1/alert.png");
        ui->statusLabel->setText("Kernel Module is disabled");
        ui->actionDisable_kernel_module->setChecked(true);
        break;
    case 1:
        picture = QPixmap(":res1/info.png");
        ui->statusLabel->setText("Module is enabled with option comparison by name");
        ui->actionCompare_by_Name->setChecked(true);
        break;
    case 2:
        picture = QPixmap(":res1/info.png");
        ui->statusLabel->setText("Module is enabled with option comparison by full path");
        ui->actionCompare_by_full_path->setChecked(true);
        break;
    default:
        break;
    }

    picture=picture.scaled(picSize);
    ui->iconLabel->setPixmap(picture);

}

void MainWindow::on_taskView_doubleClicked(const QModelIndex &ind)
{
    if(!isValid(ind)) return;
    QModelIndex index = pmodel->mapToSource(pmodel->index(ind.row(),2));
    QString path = index.data(Qt::DisplayRole).toString();
    blModel->writeToFile(path,false);
    onRefreshAction();
}

void MainWindow::on_blacklistView_doubleClicked(const QModelIndex &ind)
{
    QModelIndex index = bmodel->mapToSource(bmodel->index(ind.row(),0));
    QString path = index.data(Qt::DisplayRole).toString();
    blModel->writeToFile(path,true);
    onRefreshAction();
}
void MainWindow::on_addPath_clicked()
{
    QFileDialog dialog;
    QString filePath = dialog.getOpenFileName(this);
    QFileInfo fileInfo(filePath);
    if(!fileInfo.isExecutable())
    {
        QMessageBox message(QMessageBox::Icon(), "Invalid path", "You couldn't add to blacklist "
                            "or terminate file \"" + filePath + "\" is not executable ", QMessageBox::Ok);
        message.exec();
        return ;
    }

    blModel->writeToFile(filePath, false);
    onRefreshAction();
}

void MainWindow::on_actionDisable_kernel_module_triggered()
{
    uncheckAllItems(ui->menuSet_module_option->actions());
    writeOption(0);
    displayModuleOptions(0);
}

void MainWindow::on_actionCompare_by_Name_triggered()
{
    uncheckAllItems(ui->menuSet_module_option->actions());
    writeOption(1);
    displayModuleOptions(1);
}

void MainWindow::on_actionCompare_by_full_path_triggered()
{
    uncheckAllItems(ui->menuSet_module_option->actions());
    writeOption(2);
    displayModuleOptions(2);
}
