#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QModelIndex"
#include <QMainWindow>
#include "QString"
#include "QTableView"
#include "QStandardItemModel"
#include "modelFromFile.h"
#include <QSortFilterProxyModel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    //-====Menu slot
    void onExitAction();
    void onRefreshAction();
    void onAutoRefreshIn1SecAction();
    void onAutoRefreshIn5SecAction();
    void onAutoRefreshIn10SecAction();
    void onAutoRefreshIn30SecAction();
    void onAutoRefreshIn1MinAction();
    void onAutoRefreshInNeverAction();
    void onAboutAction();
    void onSearchAction();
    void onHelpAction();
    void uncheckAllItems(QList<QAction*> list);


    //===
private slots:
    void on_lineEdit_textChanged(const QString &arg1);
    void on_cleanBlacklist_clicked();
    void on_terminate_clicked();
    void on_taskView_doubleClicked(const QModelIndex &ind);
    void on_blacklistView_doubleClicked(const QModelIndex &ind);
    void on_addPath_clicked();

    void on_actionDisable_kernel_module_triggered();

    void on_actionCompare_by_Name_triggered();

    void on_actionCompare_by_full_path_triggered();

private:
    void setViewOptions(QTableView * tableView);//сделать приватным
    bool isValid(const QModelIndex &ind);
    void writeOption(int option);
    int getOption();
    void displayModuleOptions(int option);

    QTimer * t;
    Ui::MainWindow *ui;
    /*QScopedPointer<QSortFilterProxyModel>  pmodel;
    QScopedPointer<QSortFilterProxyModel>  bmodel;*/
    QSortFilterProxyModel * pmodel;//при инициализации задается родитель, который следит за его удалением ПТР не нужет
    QSortFilterProxyModel * bmodel;
    QScopedPointer<ModelWrapperFromFile>  procModel;
    QScopedPointer<ModelWrapperFromFile>  blModel;

};

#endif // MAINWINDOW_H
