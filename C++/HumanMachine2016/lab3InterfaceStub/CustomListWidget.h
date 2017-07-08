#ifndef CustomListWidget_H
#define CustomListWidget_H
#include <QListWidget>

class CustomListWidget: public QListWidget
{
    Q_OBJECT
public:
       explicit CustomListWidget(QWidget *parent = 0);
public slots:
    void changeNextRowIcon();
    void changePrevRowIcon();
};

#endif // CustomListWidget_H
