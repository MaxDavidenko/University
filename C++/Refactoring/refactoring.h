#ifndef REFACTORING_H
#define REFACTORING_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <QString>
#include <QRegularExpression>
using namespace std;

class Refactoring
{
private:
    static vector<map<string,string>> localvar;
    static map<string,string> funcvar;
    const int countPostOperator = 27;
    const int countPrefOperator = 4;
    static string postoperators[];
    static string prefoperators[];

    void testLocalVariableInLine(string line, int level);
    void testVariableInLine(string line);
    void testVariableInCode(string selected, bool isSelected);
    bool isNameOfVariable(QChar ch);
    bool isPostOperator (string op);
    bool isPrefOperator(string op);
    int alignBlocks(QString & text, int start, int end, int count);
    void addDelimiters(QString &text,int &start, int & end, int count);
    void alignToLeftSide(QString &text);
    void alignScopes(QString &text);
    bool checkOnComment(QString &text, int start);
    void alignBlocksWithoutScopes(QString & sourceCode, QRegularExpression e);


public:
    Refactoring();
    string inlineProcedure(string codeText, string selectedProc);
    string explicitProcedure(string codeText, string selectedText, string name);
    QString rename(QString sourceCode, QString sourceVar, QString resultVar);
    QString formatting(QString sourceCode);

};



#endif // REFACTORING_H
