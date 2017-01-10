#include <QTextStream>
#include "QStandardItem"
#include "modelFromFile.h"
ModelWrapperFromFile::ModelWrapperFromFile(QString fileName):fileName(fileName),model(new QStandardItemModel()) {}

int ModelWrapperFromFile::getDataFromFile(QString fileName)
{
    horizontalHeader.clear();
    list.clear();
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return -1;
    QTextStream textStream(&file);
    horizontalHeader << (textStream.readLine()).split("\t");
    while (!textStream.atEnd())
        list << (textStream.readLine()).split("\t");
    file.close();
    return 0;
}


void ModelWrapperFromFile::setModel()
{

    if (getDataFromFile(fileName) < 0) {
        QTextStream errstream(stdout);
        errstream << "Can't open file "<<fileName<<"!\n";
        return;
    }
    if(!model.isNull ()) model.reset();
    size_t col = horizontalHeader.size();
    size_t row = 0;
    row = list.size() / col;
    model.reset (new QStandardItemModel(row, col));
    QStandardItem *item = NULL;
    model->setHorizontalHeaderLabels(horizontalHeader);
    QStringListIterator iter(list);
    for(size_t i = 0;i < row;i++) {
         for(size_t j = 0;j < col;j++) {
            item = new QStandardItem(iter.next());
            model->setItem(i, j, item);
         }

    }

}

QStandardItemModel *ModelWrapperFromFile::getModel()
{
   try {
           setModel();
        }
    catch(const std::exception& e){
            QTextStream out(stderr);
            out << e.what ()<<'\n';
    }
   return model.data();
}
QString ModelWrapperFromFile::getFileName()
{
    return fileName;
}

void ModelWrapperFromFile::writeToFile(QString& str, bool isRemove)
{
    if(isRemove) str = "-" + str;
    QFile file(fileName);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << str <<"\n";
    file.close();
}
