#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
namespace Ui {
class MainWindow;
}
class Form;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event);
    ~MainWindow();

public slots:
    void showSettingPanel();
    void generateCodeDialogCall();
    void changeGlobalCursor();
    void showDialogMenu();
private slots:
    void on_saveButton_clicked();

    void on_OpenButton_clicked();

    void on_exportProjectButton_clicked();

    void on_createNewFileButton_clicked();

    void on_settingsButton_clicked();

    void on_createClassDiagramButton_toggled(bool checked);

    void on_createNewDiagramOfPrecendenceButton_toggled(bool checked);

    void on_createSequenceDiagramButton_toggled(bool checked);

    void on_createCommunicationDiagramButton_toggled(bool checked);

    void on_createStateDiagramButton_toggled(bool checked);

    void on_createActivityDiagramButton_toggled(bool checked);

    void on_createDeployDiagramButton_toggled(bool checked);

    void on_addDiagramPacketButton_toggled(bool checked);

    void on_addClassOnDiagrammButton_toggled(bool checked);

    void on_addAssociationLinkButton_toggled(bool checked);

    void on_addAgregationLinkButton_toggled(bool checked);

    void on_addCompositionLinkButton_toggled(bool checked);

    void on_addFiniteLinkButton_toggled(bool checked);

    void on_addGeneralizationLinkButton_toggled(bool checked);

    void on_addNewInterfaceOnDiagramButton_toggled(bool checked);

    void on_addRealizationLinkOnDiagramButton_toggled(bool checked);

    void on_createNewAttributeButton_toggled(bool checked);

    void on_createNewOperationButton_toggled(bool checked);

    void on_createAssociationClassButton_toggled(bool checked);

    void on_addCommentOnDiagramButton_toggled(bool checked);

    void on_addCommentLingOnDiagramButton_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
