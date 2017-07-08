#ifndef MODELFROMFILE_H
#define MODELFROMFILE_H


#include <QStringList>
#include <QFile>
#include "QStandardItemModel"
#include <QScopedPointer>

class ModelWrapperFromFile
{
    QString fileName;
    QScopedPointer<QStandardItemModel> model;
    QStringList list;
    QStringList horizontalHeader;
    int getDataFromFile(QString fileName);
    void setModel();
public:
    ModelWrapperFromFile(QString fileName);
    QStandardItemModel *getModel();
    QString getFileName();
    void writeToFile(QString &str, bool isRemove);
};

#endif // MODELFROMFILE_H
