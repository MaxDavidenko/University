#include <QCoreApplication>
#include <QString>
#include <QFile>
#include <QVector>
#include <QTextStream>
#include <iostream>
#include <limits.h>
QString text;
int saveFile(QString fileName);
void toStartPosition();
void AlignScopes(QChar chr);
int Formatting(QString & text, int start, int end, int count);
void align(QString &text,int &start, int & end, int count);
void regExpTest();
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("//home/max//Code//C++//FormatText//SystemBlock.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream reader(&file);
        text = reader.readAll();
        regExpTest();
        std::cout << text.toStdString();
        //AlignScopes('{');
        //toStartPosition();
        //Formatting(text, 0, text.size(), 0);
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

void regExpTest() {
    //QRegularExpression regEx("^\\t+\")
    //int pos  = text.indexOf(QRegExp("\\t+ \\"), 0);
    int start = 0;
    int end   = 0;
    int end2  = 0;
    while (start >= 0 && end >= 0) {
        start = text.indexOf(QRegExp("^\\t+|\\s+"), start);
        end   = text.indexOf(QRegExp("\\w|[{]|[}]|[*]|[/*]|[//]"),start);
        //end2  = text.indexOf(QRegExp("[A-Za-Z]"));
        //if (end2 < 0)
       //     end2= INT_MAX;
        //end  = std::min(end, end2);
        if (end != start)
        text.replace(start, end - start, "");
        start = text.indexOf("\n",start);
        ++start;
    }
}

void toStartPosition()
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
      expr_end.push_back(text.indexOf(QRegExp("[\\w]"), start));
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
/*
void AlignScopes(QChar chr)
{
    int start = text.indexOf('{');
    int start2 = text.indexOf('}');
    QVector<int>  expr_end;
    int res = 0;
    start = start < start2? start:start2;
    int end = text.size();
    while (start > 0 && start < end)
    {
        if ( text.at(start - 1) != '\n' &&
           (text.at(start) == '{' || text.at(start) == '}'))
        {
            QString st('\n');
            st.append(text.at(start));
            st.append(text.at(start +1));
            text.replace(start, 1, ' ');
            text.insert(start,st);
            end = text.size();
        }
        start = text.indexOf("{", start +4, Qt::CaseInsensitive);
        start2 = text.indexOf("}", start +4, Qt::CaseInsensitive);
        start = start < start2? start:start2;
    }
}*/

void AlignScopes(QChar chr)
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
            st.append(text.at(start +1));
            text.replace(start, 1, ' ');
            text.insert(start,st);
            end = text.size();
        }
        start = text.indexOf("{", start +4, Qt::CaseInsensitive);
        start2 = text.indexOf("}", start +4, Qt::CaseInsensitive);
        start = start < start2? start:start2;
    }
}
int Formatting(QString & text, int start, int end, int count)
{
   while (start < end -1 && start >= 0)
   {
      if (text.at(start +1) == '{')
      {
          align(text,start, end, count);
          start = text.indexOf('\n', start +1);
          count += 1;
      }
      else if (text.at(start +1) == '}')
          count -= 1;
      align(text, start, end, count);
      start = text.indexOf('\n', start +1);
   }
   return start;
}
void align(QString &text,int &start, int & end, int count) {
    text.insert(start+1, QString(count*4, ' '));
    std::cout << text.toStdString() << '\n';
    end += count * 4;
}


