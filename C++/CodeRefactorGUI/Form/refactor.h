#ifndef REFACTOR_H
#define REFACTOR_H

#include <QString>


class Refactor {  
private:
    bool isNameOfVariable(QChar ch) const;
public:
    Refactor();
    
    QString rename(QString sourceCode, QString sourceVar, QString resultVar);
    QString formatting(QString sourceCode);
    int alignBlocks(QString & text, int start, int end, int count);
    void addDelimiters(QString &text,int &start, int & end, int count);
    void alignToLeftSide(QString &text);
    void alignScopes(QString &text);
    bool checkOnComment(QString &text, int start);

};

#endif // REFACTOR_H
