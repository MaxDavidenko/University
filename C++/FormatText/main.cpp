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
void AlignScopes();
void alignRightSide();
void removeExtraDelimiters(QString &text, int pos);
bool checkOnComment(QString &text, int start);
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("//home/max//Code//C++//FormatText//SystemBlock.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream reader(&file);
        text = reader.readAll();
        regExpTest();
        alignRightSide();
        AlignScopes();
        Formatting(text, 0, text.size(), 0);
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
void removeExtraDelimiters(QString &text, int start) {
    int end = text.indexOf(QRegExp("\\w"), start);
    text.replace(start+1, end - start +1, "\n");
   // text.replace(QRegExp("\\{"),"\n\{\n");
}

void regExpTest() {
    int start = 0;
    int end   = 0;
    while (start >= 0 && end >= 0) {
        start = text.indexOf(QRegExp("^\\t+|\\s+"), start);
        end   = text.indexOf(QRegExp("\\w|[{]|[}]|[*]|[/\\*]|[//]"),start);
        text.replace(start, end - start, "");
        start = text.indexOf("\n", start);
        ++start;
    }
}
bool checkOnComment(QString &text, int start) {
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

void AlignScopes() {
    int start = text.indexOf("\n", 0);
    int end   = text.lastIndexOf(QRegExp("\\{"), start);
    int end2  = text.lastIndexOf(QRegExp("\\}"), start);
    while (start >= 0 && end >=0) {
        if (end2 < end  && end2 > 0)
            end = end2;
        if (end < 0)
            return;
        if (checkOnComment(text, start)) {
            start = text.indexOf("\n", end);
            end  = text.indexOf(QRegExp("\\{"), start);
            end2  = text.indexOf(QRegExp("\\}"), start);
                continue;
        }
        QString st;
        if (text.at(end) == '{') {
        if (text.at(end -1) != '\n') {
             st.append('\n');
         }
        }
         st.append(text.at(end));
         if (text.at(end) == '}')
         if (text.at(end +1) != '\n') {
              st.append('\n');
          }
         text.remove(end, 1);
         text.insert(end, st);
         start = end;

         start = text.indexOf("\n", start +1);
         end  = text.indexOf(QRegExp("\\{"), start);
         end2  = text.indexOf(QRegExp("\\}"), start);
     }
}

void alignRightSide() {
   int start = 0;
   int start2 = 0;
   int end = 0;
   while (start >=0 && end >=0) {
       end = text.indexOf(QRegExp("\\{"), end +1);
       start   = text.lastIndexOf(QRegExp("\\w"), end);
       start2   = text.lastIndexOf(QRegExp("\\)"), end);
       if (checkOnComment(text, text.lastIndexOf("\n", end)))
            continue;
       if (start2 > start && start2 >0)
            text.replace(start2, end - start2 , ")");
       else if (start > start2)
               text.replace(start, end - start, text.at(start));
   }
   start = 0;
   end = 0;
   while (start >=0 && end >= 0) {
       start = text.indexOf(QRegExp("\\{"), start+1);
       end   = text.indexOf(QRegExp("\\w|[//*]"), start);
       if (checkOnComment(text, text.lastIndexOf("\n",start)))
            continue;
       text.replace(start, end - start , "{\n");
   }
}

/*
   while (start >=0 && end >=0) {
       end = text.indexOf(QRegExp("\\{|\\}"), end +1);
       start   = text.lastIndexOf(QRegExp("\\w|\\)"), end);
       if (checkOnComment(text, text.lastIndexOf("\n", end)))
            continue;
       text.replace(start, end - start , ")");
   }
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
/*
void AlignScopes() {
    int start = text.indexOf(QRegExp("[{]"), 0);
    int start2 = text.indexOf(QRegExp("[}]"), 0);
    QVector<int>  expr_end;
    int res = 0;
    start = start < start2? start:start2;
    int end = text.size();
    while (start > 0 && start < end) {
        expr_end.clear();
        if (start > 0) {
            expr_end.push_back(text.lastIndexOf('\n', start));
            expr_end.push_back(text.indexOf('\n', start + 1));
            expr_end.push_back(text.lastIndexOf(QRegExp("[//*]"), start));
            expr_end.push_back(text.lastIndexOf(QRegExp("[*]"), start));
            expr_end.push_back(text.lastIndexOf(QRegExp("[//]"), start));
            for (int i = 2; i < expr_end.size();++i)
                  if(expr_end.at(i) == -1 || expr_end.at(i) < expr_end[0])
                      expr_end[i] = INT32_MAX;
            res = (*std::min_element(expr_end.data() + 2, expr_end.data()
                                      + expr_end.size()));

            if (res >= expr_end[0] && res < expr_end[1] && res < start) {
                start  = text.indexOf(QRegExp("[{]"), start +1);
                start2 = text.indexOf(QRegExp("[}]"), start -1);
                start = start < start2? start : start2;
                continue;
            }
            QString st;
            if (text.at(start -1) != '\n') {
                st.append('\n');
            }
            st.append(text.at(start));
            if (text.at(start + 1) != '\n') {
                st.append('\n');
            }
            else {
                st.append(text.at(start + 1));
            }
            text.remove(start, 1);
            text.insert(start, st);
            end = text.size();
        }
        start  = text.indexOf(QRegExp("[{]"), start + 4);
        start2 = text.indexOf(QRegExp("[}]"), start + 4);
        //start = text.indexOf("{", start +4, Qt::CaseInsensitive);
        //start2 = text.indexOf("}", start +4, Qt::CaseInsensitive);
        start = start < start2? start : start2;
    }
}*/
int Formatting(QString & text, int start, int end, int count)
{
   while (start < end -1 && start >= 0)
   {
      if (text.at(start +1) == '{' &&
          !checkOnComment(text, text.lastIndexOf(QRegExp("\\n"), start)))
      {
          align(text,start, end, count);
          start = text.indexOf('\n', start +1);
          count += 1;
      }
      else if (text.at(start +1) == '}' &&
               !checkOnComment(text, text.lastIndexOf(QRegExp("\\n"), start)))
      {
          count -= 1;
      }
      align(text, start, end, count);
      start = text.indexOf('\n', start +1);
   }
   return start;
}
void align(QString &text,int &start, int & end, int count) {
    text.insert(start+1, QString(count*4, ' '));
    end += count * 4;
}


