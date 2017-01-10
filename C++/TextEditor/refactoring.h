#ifndef REFACTORING_H
#define REFACTORING_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Refactoring
{
private:
    static vector<map<string,string>> localvar;
    static map<string,string> funcvar;
    static const int countPostOperator = 27;
    static const int countPrefOperator = 4;
    static string postoperators[];
    static string prefoperators[];

    static void testLocalVariableInLine(string line, int level);
	static void testVariableInLine(string line);
    static void testVariableInCode(string selected, bool isSelected);

    static bool isPostOperator (string op);
    static bool isPrefOperator(string op);

public:
    Refactoring();
    static string inlineProcedure(string codeText, string selectedProc);
    static string explicitProcedure(string codeText, string selectedText, string name);
};



#endif // REFACTORING_H
