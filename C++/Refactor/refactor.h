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
    void AlignScopes(QString & text);
    void toStartPosition(QString & text);
    int blocksFormatting(QString & text, int start, int end, int count);
    void align(QString &text,int &start, int & end, int count);

};

#endif // REFACTOR_H
