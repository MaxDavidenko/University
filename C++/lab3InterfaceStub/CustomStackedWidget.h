#ifndef CUSTOMSTACKEDWIDGET_H
#define CUSTOMSTACKEDWIDGET_H
#include <QStackedWidget>
class CustomStackedWidget: public QStackedWidget
{
    Q_OBJECT
public:
    explicit CustomStackedWidget(QWidget *parent = 0);
public slots:
    void setNextPage();
    void setPrevPage();
signals:
    void closeDialog();
    void changeNextButtonToFinish(QString str = "Finish");
};

#endif // CUSTOMSTACKEDWIDGET_H
