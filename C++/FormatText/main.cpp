#include <QCoreApplication>
#include <QString>
#include <QFile>
#include <QVector>
#include <QTextStream>
#include <iostream>
#include <regex>
#include <QRegularExpression>
#include <limits.h>
QString text;
int saveFile(QString fileName);
void AlignScopes(QChar chr);
int alignBlocks(QString & text, int start, int end, int count);
void align(QString &text,int &start, int & end, int count);
void alignToLeftSide(QString &text);
void AlignScopes();
void alignRightSide(QString &text);
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
        alignRightSide(text);
        //alignBlocks(text, 0, text.size(), 0);
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
void alignToLeftSide(QString &text) {
    text.replace(QRegExp("\\n\\s+|\\t+\\<"),"\n");

    //  ((\/\/|\/\*|\*).*\{) -> все те, которые заключены в коментарий
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

    //\}(?!(\/\/.*(?=(\})))), "}\n"
    //\{(?!(\/\/.*(?=(\})))), "\n{"

    /*
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
     }*/
}
void alignRightSide(QString &text)
{
   std::string tmp_str(text.toStdString());
   std::reverse(tmp_str.begin(), tmp_str.end());
   text.clear();
   text += tmp_str.c_str();
   std::cout << text.toStdString() << "\n\n\n";
   int t = text.indexOf(QRegExp("\\s*\\t*[{]\\s*\\t*(?!(.*\\/\\/|\\*\\/))"), 0);
   text.replace(QRegularExpression("\\s*\\t*\\{\\s*\\t*(?!(.*\\/\\/|\\*\\/*))"), "\n{\n");
   text.replace(QRegularExpression("\\s*\\t*\\}\\s*\\t*(?!(.*\\/\\/|\\/\\*))"), "\n}\n");
   tmp_str.clear();
   tmp_str += text.toStdString();
   std::reverse(tmp_str.begin(), tmp_str.end());
   text.clear();
   text += tmp_str.c_str();

}

/*
void alignRightSide() {
   int end = text.indexOf(QRegExp("\\{"), 0);
   int start = text.lastIndexOf(QRegExp("\\w"), end);
   int start2 = text.lastIndexOf(QRegExp("\\)"), end);
   while (start >=0 && end >=0) {
       if (checkOnComment(text, text.lastIndexOf("\n", end)))
       {
            end++;
            continue;
       }
       if (start2 > start && start2 >0)
            text.replace(start2, end - start2 , ")");
       else if (start > start2)
               text.replace(start, end - start, text.at(start));
       end = text.indexOf(QRegExp("\\{"), end +1);
       start   = text.lastIndexOf(QRegExp("\\w"), end);
       start2   = text.lastIndexOf(QRegExp("\\)"), end);

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
*/
int alignBlocks(QString & text, int start, int end, int count)
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


