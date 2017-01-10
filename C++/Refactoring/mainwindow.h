#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QClipboard>
#include "highlighter.h"
#include "refactoring.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
     void showContextMenu(const QPoint &pt);
public:
    explicit MainWindow(QWidget *parent = 0);
    //virtual protected
    void hello();
    ~MainWindow();

private slots:
    void on_pbExplicitProc_clicked();
    void on_refactoringExplicit_clicked();

    void on_buttonRename_clicked();

    void on_formatCodeButton_clicked();

private:
    Ui::MainWindow *ui;
    Highlighter *highlighter;
    Refactoring refactor;
protected:
    virtual void closeEvent(QCloseEvent *event) override;
};

#endif // MAINWINDOW_H
