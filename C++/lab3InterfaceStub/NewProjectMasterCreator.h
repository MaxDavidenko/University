#ifndef NEWPROJECTMASTERCREATOR_H
#define NEWPROJECTMASTERCREATOR_H
#include <QWidget>
#include <QMainWindow>
#include "ui_newproject.h"
namespace Ui
{
class NewProjectMasterCreator;
}
class NewProjectMasterCreator: public QWidget
{
    Q_OBJECT
public:
    explicit NewProjectMasterCreator(QWidget * parent = 0);
private slots:

    void setTemplateInfo();

    void setCodeReverseIngeneeringInfo();

    void on_pushBrowsePathButton_clicked();

    void on_BrowseCodeButton_clicked();

    void checkFieldsOnEmpty();

    void on_NextPageButton_clicked();

    void on_PrevPageButton_clicked();

    void on_CancelButton_clicked();

private:
    Ui::NewProjectForm *ui;


};

#endif // NEWPROJECTMASTERCREATOR_H
