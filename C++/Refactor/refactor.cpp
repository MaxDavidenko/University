#include "refactor.h"
#include <QVector>
#include <iostream>
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
    AlignScopes(sourceCode);
    toStartPosition(sourceCode);
    blocksFormatting(sourceCode, 0, sourceCode.size(), 0);
    std::cout << sourceCode.toStdString() << '\n';
    return sourceCode;
}


void Refactor::toStartPosition(QString & text)
{
    int end = text.size();
    int next = 0;
    QVector<int>  expr_end;
    for (int start = 0; start < end && start >= 0;++start)
    {
        if ((start =  text.indexOf('\n', start + 1)) < 0)
            break;
      expr_end.push_back(text.indexOf(QRegExp("[\\/\\*]"), start));
      expr_end.push_back(text.indexOf(QRegExp("[\\*\\/]"), start));
      expr_end.push_back(text.indexOf(QRegExp("[-\\w]"), start));
      expr_end.push_back(text.indexOf(QRegExp("[\\{]"), start));
      expr_end.push_back(text.indexOf(QRegExp("[\\}]"), start));
      for (int i = 0; i < expr_end.size();++i)
            if(expr_end.at(i) == -1)
                expr_end[i] = INT32_MAX;
      next = (*std::min_element(expr_end.data(), expr_end.data()
                                + expr_end.size()));
      text.replace(start, next - start, "\n");
      expr_end.clear();
    }
}
void Refactor::AlignScopes(QString & text)
{
    int start = text.indexOf('{');
    int start2 = text.indexOf('}');
    QVector<int>  expr_end;
    int res = 0;
    start = start < start2? start:start2;
    int end = text.size();
    while (start > 0 && start < end)
    {
        expr_end.clear();
        if ( text.at(start - 1) != '\n' &&
           (text.at(start) == '{' || text.at(start) == '}'))
        {
            expr_end.push_back(text.lastIndexOf('\n', start));
            expr_end.push_back(text.indexOf('\n', start + 1));
            expr_end.push_back(text.lastIndexOf(QRegExp("\\/\\*"), start));
            expr_end.push_back(text.lastIndexOf(QRegExp("\\*"), start));
            expr_end.push_back(text.lastIndexOf("//", start));
            for (int i = 1; i < expr_end.size();++i)
                  if(expr_end.at(i) == -1 || expr_end.at(i) < expr_end[0])
                      expr_end[i] = INT32_MAX;
            res = (*std::min_element(expr_end.data() + 2, expr_end.data()
                                      + expr_end.size()));

            if (res >= expr_end[0] && res < expr_end[1] && res < start)
            {
                start +=1;
                continue;
            }
            QString st('\n');
            st.append(text.at(start));
            if (text.at(start +1) != '\n')
            st.append('\n');
            //st.append(text.at(start +1));
            text.replace(start, 1, "");
            text.insert(start, st);
            end = text.size();
        }
        start = text.indexOf("{", start +4, Qt::CaseInsensitive);
        start2 = text.indexOf("}", start +4, Qt::CaseInsensitive);
        start = start < start2? start:start2;
    }
}

int Refactor::blocksFormatting(QString & text, int start, int end, int count)
{
   while (start < end -1 && start >= 0)
   {
      if (text.at(start +1) == '{')
      {
          align(text,start, end, count);
          start = text.indexOf('\n', start +1);
          count += 1;
          continue;
      }
      else if (text.at(start +1) == '}')
          count -= 1;
      align(text, start, end, count);
      start = text.indexOf('\n', start +1);
   }
   return start;
}
void Refactor::align(QString &text,int &start, int & end, int count) {
    text.insert(start+1, QString(count*4, ' '));
    //std::cout << text.toStdString() << '\n';
    end += count * 4;
}
