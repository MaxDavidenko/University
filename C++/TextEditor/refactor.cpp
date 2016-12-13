#include "refactor.h"
#include <QVector>
#include <iostream>
#include <QRegularExpression>
Refactor::Refactor() {
    
}

bool Refactor::isNameOfVariable(QChar ch) const {
    return ((ch >= QChar('a') && ch <= QChar('z')) || (ch >= QChar('A') && ch <= QChar('Z')) || ch == QChar('_') || (ch >= QChar('0') && ch <= QChar('9')));
}

QString Refactor::rename(QString sourceCode, QString sourceVar, QString resultVar) {
    for(int i = 0, j = 0, lenght = sourceCode.length(); i < lenght; ++i) {
        if(sourceCode[i] == '/' && sourceCode[i + 1] == '/') {
            for(; sourceCode[i] != '\n' && i < lenght; ++i);
        }
        
        if(sourceCode[i] == '/' && sourceCode[i + 1] == '*') {
            for(; sourceCode[i] != '*' && sourceCode[i + 1] == '/' && i < lenght; ++i);
        }
        
        if(sourceCode[i] == sourceVar[j]) {
            j++;
            if(j == sourceVar.length()) {
                if((i + 1 < lenght || i - j >= 0 ? !isNameOfVariable(sourceCode[i + 1]) : true) 
                     && (i - j < 0 ? true : !isNameOfVariable(sourceCode[i - j]))) {
                    i -= sourceVar.length() - 1;
                    sourceCode.remove(i, sourceVar.length());
                    sourceCode.insert(i, resultVar);
                    }
                j = 0;
            }    
        }
        else j = 0;
    }
    return sourceCode;
}

QString Refactor::formatting(QString sourceCode) {
    alignToLeftSide(sourceCode);
    alignScopes(sourceCode);
    alignBlocks(sourceCode, 0, sourceCode.size(), 0);
    alignBlocksWithoutScopes(sourceCode,
            QRegularExpression("if\\s*\\(*.*\\)\\s*\\n\\s*(?!\\{)\\b"));
    return sourceCode;
}
void Refactor::alignBlocksWithoutScopes(QString & sourceCode,
                                        QRegularExpression e)
{
    if (!e.isValid())
    {
        return;
    }
    int pos = sourceCode.indexOf(e, 0);
    QString s_prev("");
    QString s_temp = e.match(sourceCode, pos).captured();
    while(e.match(sourceCode, pos).isValid() && s_temp != "")
    {
        sourceCode.replace(e, s_temp + QString("    "));
        pos = sourceCode.indexOf(e, pos +1);
        s_prev = s_temp;
        s_temp = e.match(sourceCode, pos).captured();
        if (s_prev == s_temp)
            return;
    }
}

void Refactor::alignToLeftSide(QString &text)
{
    text.replace(QRegExp("\\n\\s+|\\t+\\<"),"\n");
}
bool Refactor::checkOnComment(QString &text, int start)
{
    bool res = false;
    int commentPos = text.indexOf(QRegExp("//|[/\\*]"), start);
    int scopePos =  text.indexOf(QRegExp("\\{|\\}"), start);
    int nextAfterStart = text.indexOf("\n", scopePos);
    if (start != text.lastIndexOf("\n",scopePos))
        return false;
    if ((scopePos > start) && start > 0 && (scopePos > commentPos)
            && commentPos > 0 && (scopePos < nextAfterStart)
            && nextAfterStart > 0)
    {
        res = true;
    }
    return  res;
}
void Refactor::alignScopes(QString &text)
{
   std::string tmp_str(text.toStdString());
   std::reverse(tmp_str.begin(), tmp_str.end());
   text.clear();
   text += tmp_str.c_str();
   std::cout << text.toStdString() << "\n\n\n";
   text.replace(QRegularExpression("\\s*\\t*\\{\\s*\\t*(?!(.*(\\/\\/|\\*\\/)))"), "\n{\n");
   text.replace(QRegularExpression("\\s*\\t*\\}\\s*\\t*(?!(.*(\\/\\/|\\*\\/)))"), "\n}\n");
   text.replace(QRegularExpression("\\n+"),"\n");
   tmp_str.clear();
   tmp_str += text.toStdString();
   std::reverse(tmp_str.begin(), tmp_str.end());
   text.clear();
   text += tmp_str.c_str();

}
int Refactor::alignBlocks(QString & text, int start, int end, int count)
{
   while (start < end -1 && start >= 0)
   {
      if (text.at(start +1) == '{' &&
          !checkOnComment(text, text.lastIndexOf(QRegExp("\\n"), start)))
      {
          addDelimiters(text,start, end, count);
          start = text.indexOf('\n', start +1);
          count += 1;
      }
      if (text.at(start +1) == '}' &&
               !checkOnComment(text, text.lastIndexOf(QRegExp("\\n"), start)))
      {
          count -= 1;
      }
      addDelimiters(text, start, end, count);
      start = text.indexOf('\n', start +1);
   }
   return start;
}
void Refactor::addDelimiters(QString &text,int &start, int & end, int count)
{
    text.insert(start+1, QString(count*4, ' '));
    end += count * 4;
}


