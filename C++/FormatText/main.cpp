#include <QCoreApplication>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QRegularExpression>
#include <limits.h>
QString text;
int alignBlocks(QString & text, int start, int end, int count);
void addDelimiters(QString &text,int &start, int & end, int count);
void alignToLeftSide(QString &text);
void alignScopes(QString &text);
bool checkOnComment(QString &text, int start);
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("//home/max//Code//C++//FormatText//SystemBlock.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream reader(&file);
        text = reader.readAll();
        alignToLeftSide(text);
        alignScopes(text);
        alignBlocks(text, 0, text.size(), 0);
        std::cout << text.toStdString ();

    }
    QFile fileW("//home/max//Code//C++//FormatText//file.txt");
    if (fileW.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&fileW);
        stream << text;
        file.close();
    }
    return a.exec();

}
QString formatting(QString sourceCode) {
    alignToLeftSide(sourceCode);
    alignScopes(sourceCode);
    alignBlocks(sourceCode, 0, sourceCode.size(), 0);
    std::cout << sourceCode.toStdString() << '\n';
    return sourceCode;
}

void Refactor::alignToLeftSide(QString &text)
{
    text.replace(QRegExp("\\n\\s+|\\t+\\<"),"\n");
    //  ((\/\/|\/\*|\*).*\{) -> все те, которые заключены в коментарий
}
bool checkOnComment(QString &text, int start)
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
void alignScopes(QString &text)
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
int alignBlocks(QString & text, int start, int end, int count)
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
      else if (text.at(start +1) == '}' &&
               !checkOnComment(text, text.lastIndexOf(QRegExp("\\n"), start)))
      {
          count -= 1;
      }
      addDelimiters(text, start, end, count);
      start = text.indexOf('\n', start +1);
   }
   return start;
}
void addDelimiters(QString &text,int &start, int & end, int count)
{
    text.insert(start+1, QString(count*4, ' '));
    end += count * 4;
}


