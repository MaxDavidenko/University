#ifndef CUSTOMDIALOG_H
#define CUSTOMDIALOG_H

#include <QObject>
#include <QFileDialog>
class CustomDialog : public QFileDialog
{
    Q_OBJECT
public:
    CustomDialog();
    virtual ~CustomDialog();
};


#endif // CUSTOMDIALOG_H
