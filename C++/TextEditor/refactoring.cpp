#include "refactoring.h"
#include <sstream>
#include <regex>
#include <list>
map<string, string> Refactoring::funcvar = map<string, string>();
vector<map<string, string>> Refactoring::localvar = vector<map<string, string>>();
string Refactoring::postoperators[] = { ":",".","->","[","++","--","+=","-=","*=","/=","+","-","/","%","=","<",">","<=",">=",">>","<<","==","!=","&&","&","||","|" };
string Refactoring::prefoperators[] = { "++","--","!","delete" };
Refactoring::Refactoring()
{

}

//#pragma region testOp
bool Refactoring::isPostOperator(string op) {
    if (op.empty())return false;
    string copy = op;
    while (copy.size() != 0 && copy[0] == ' ') {
        copy.erase(0, 1);
    }
    for (int i = 0; i<countPostOperator; i++) {
        string pr = postoperators[i];
        if (copy.size() >= pr.size() && copy.substr(0, pr.size()) == pr)
            return true;
    }
    return false;
}

bool Refactoring::isPrefOperator(string op) {
    if (op.empty())return false;
    string copy = op;
    while (copy.size() != 0 && copy[copy.size() - 1] == ' ') {
        copy.erase(copy.size() - 1, 1);
    }
    for (int i = 0; i<countPrefOperator; i++) {
        string pr = prefoperators[i];
        if (copy.size() >= pr.size() && copy.substr(copy.size() - pr.size(), copy.size()) == pr)
            return true;
    }
    return false;
}
//#pragma endregion


void Refactoring::testLocalVariableInLine(string line, int level) {
    if (line.empty()) return;
    //отсечение всего что  после;
    auto f = line.find(";");
    if (f != string::npos) line.erase(line.begin() + f, line.end());
    //Отсечение коментариев (если в строке есть //, удаляем все после )
    f = line.find("//");
    if (f != string::npos) line.erase(line.begin() + f, line.end());

    //Проверка на обьявление локальной переменной: если есть пробел и слева от текста нет оператора а есть строка - локальная переменная
    {
        for(unsigned i =0;i<line.size();i++){
            if(i>0&&(line[i]=='*'||line[i]=='&')&&line[i-1]!=32){
                line = line.substr(0,i)+" "+line.substr(i);
            }
        }
        stringstream iss(line);
        string left, right, end = "", temp;

        iss >> left >> right;
        if (left.find('(') != string::npos || right.empty() || right.substr(0, 1) == "(") return;
        while (!iss.eof()) {
            iss >> temp;
            end += temp;
        }
        if (!isPrefOperator(left)) {
            right += end;
            bool c = false;
            for (unsigned i = 0; i < right.length(); i++) {
                if ((right[i] > 64 && right[i] < 91) || (right[i]>96 && right[i] < 123) || right[i] == '_') {
                    c = true;
                    continue;
                }
                if (c == true) {
                    while (i < right.length() && right[i] != ',') {
                        right[i] = 32; i++;
                    }
                }
                c = false;
                if (right[i] == ',')right[i] = 32;

            }
            stringstream iss1(right);
            while (!iss1.eof()) {
                iss1 >> right;
                 if (!isPrefOperator(right) && !isPostOperator(right)){
                    localvar[level].erase(right);
                    localvar[level].insert(pair<string, string>(right, left));
                }
            }
        }
    }
    return;

}
void Refactoring::testVariableInLine(string line)
{
    if (line.empty()) return;
    //отсечение всего что  после;
    auto f = line.find(";");
    if (f != string::npos) line.erase(line.begin() + f, line.end());
    //Отсечение коментариев (если в строке есть //, удаляем все после )
    f = line.find("//");
    if (f != string::npos) line.erase(line.begin() + f, line.end());

    //Переменная:
    // стоит за префиксным оператором
    // стоит передпостфиксным оператором
    // передается в качестве переменной в функцию
    // не является локальной
    // еще не существует

    //Постфиксный оператор
    for (int i = 0; i < countPostOperator; i++) {
        size_t sym = line.find(postoperators[i]);
        if (sym != SIZE_MAX) {
            sym--;
            int j = sym;
            string text = "";
            bool start_text = false;
            while (j >= 0) {
                if (line[j] == 32 && !start_text) {
                    j--;
                    continue;
                }
                if (!((line[j] > 64 && line[j] < 91) || (line[j]>96 && line[j] < 123) || line[j] == '_')) break;
                else {
                    start_text = true;
                    text = line[j] + text;
                    j--;
                }
            }
            if (text != "") {
                bool isLocal = false;
                for (unsigned j = 0; j < localvar.size(); j++) {
                    isLocal = (localvar[j].find(text) != localvar[j].end());
                }
                if (!isLocal && funcvar.find(text) == funcvar.end()) {
                    funcvar.insert(pair<string, string>(text, ""));
                    funcvar.insert(pair<string, string>("*" + text, ""));

                };
            }
        }
    }

    //Префиксный оператор
    for (int i = 0; i < countPrefOperator; i++) {
        size_t sym = line.find(prefoperators[i]);
        if (sym != SIZE_MAX) {
            sym += prefoperators[i].size();
            unsigned j = sym;
            string text = "";
            bool start_text = false;
            while (j < line.size()) {
                if (line[j] == 32 && !start_text) {
                    j++;
                    continue;
                }
                if (!((line[j] > 64 && line[j] < 91) || (line[j]>96 && line[j] < 123) || (line[j] >= '0'&&line[j] <= '9') || line[j] == '_')) break;
                else {
                    start_text = true;
                    text = line[j] + text;
                    j++;
                }
            }
            if (text != "") {
                bool isLocal = false;
                for (unsigned j = 0; j < localvar.size(); j++) {
                    isLocal = (localvar[j].find(text) != localvar[j].end());
                }
                if (!isLocal && funcvar.find(text) == funcvar.end()) {
                    funcvar.insert(pair<string, string>(text, ""));

                };
            }
        }
    }

}

void Refactoring::testVariableInCode(string selected, bool isSelected) {
    string temp = "";
    unsigned i = 0;
    int level = 0;
    localvar.resize(1);
    while (i < selected.length()) {
        for (; i < selected.length() && selected[i] != '\n'; i++) {
            if (temp != "" && (selected[i] == '{' || selected[i] == '}')) { i--; break; }
            //if (temp == "do") { temp = ""; continue; }
            if (temp == "for" || temp == "while" || temp == "if") {
                for (unsigned j = i; j<selected.length(); j++) {
                    if (selected[j] == 32)continue;
                    if (selected[j] == '(') {
                        unsigned count = 1;
                        selected[j] = '{';
                        while (count != 0) {
                            j++;
                            if (selected[j] == '(') count++;
                            else if (selected[j] == ')') count--;
                            else if (selected[j] == ',') {
                                selected[j] = ';';
                                selected.insert(j, "\n");
                            }
                        }
                        selected[j] = ';';
                        selected.insert(j, "\n");

                        j += 2;

                        while (selected[j] == 32 || selected[j] == '\n') j++;
                        if (selected[j] == '{') selected[j] = 32;
                        else {
                            while (selected[j] != ';') j++;

                            selected.insert(j + 1, "}");
                        }
                        temp = "";
                        break;
                    }
                    else break;
                }
                //TODO: TEST FOR, WHILE, IF
                //удаляем "" ставим '{' убираем() ищим след символ после ')' если он не равен '{' то ??? если равен
                //ищем нужную '}' ставим после нее '}'
            }

            //вложеные области
            if (selected[i] == '{') {
                selected[i] = 32;
                level++;
                localvar.resize(localvar.size() + 1);
            }

            else if (selected[i] == '}') {

                localvar.erase(--localvar.end());
                selected[i] = 32;
                level--;
            }
            temp += selected[i];
        }
        testLocalVariableInLine(temp, level);
        if (isSelected)testVariableInLine(temp);
        temp = "";
        i++;

    }

}

string Refactoring::explicitProcedure(string source, string selected, string outname) {
    if (outname == "")outname = "func";
    if (selected == "") {
        return ("void " + outname + "(){}\n\n" + source);
    }
    string temp_selected = selected;

    testVariableInCode(selected, true);
    //REGULAR EXPRESSION FOR CREATED FUNCTION
    regex regFunc("^\\s*[A-Za-z_]\\w*\\s*[ *&]\\s*[A-Za-z_]\\w*(::\\w*){0,1}\\s*\\(.*\\)(//.*){0,1}\\s*\\{.*");
    unsigned findName = 0;
    //REGULAR EXPRESSION FOR NAME OF FUNCTION
    regex split("\\s*\\S*\\s*\\(");

    long long start_with = source.find(temp_selected);
    long long end;
    string tstr = "";
    string testSource = source;
    bool toNextStr = false;
    bool isEndStr = false;

    //FIND A START OF SELECTED FUNCTION
    for (end = start_with - 1; end >= 0; end--) {
        if (source[end] == '{') {
            int k;
            for (k = end - 1; k >= 0; k--) {
                if (source[k] != 32) break;
            }
            if (source[k] == '\n') {
                toNextStr = true;
               // if(k>1)k--;
                end = k;
                continue;
            }
        }
        if(source[end]=='"'){
            end--;
            for(; !(source[end]=='"'&&source[end-1]!='\\');end--);
            continue;
        }
        if (toNextStr&&isEndStr) {
            tstr = '{' + tstr;
            toNextStr = false;
        }
        if (isEndStr)isEndStr = false;
        if (source[end] == '\n' || end == 0) {
            isEndStr = true;
            if (regex_match(tstr, regFunc)) {
                if (source[end] == '\n')end++;
                break;
            }
            tstr = "";
            continue;
        }
        tstr = source[end] + tstr;
    }
    if (end < 0) end = 0;

    //FIND A TYPE OF VARIABLE
    if (funcvar.size() != 0) {
        unsigned k;
        for (k = end; source[k] != '{'; k++);
        k++;
        string from_func_to_selected = source.substr(k, source.find(temp_selected, k) - k);
        testVariableInCode(from_func_to_selected, false);
        for (int k = 0; k <localvar.size(); k++) {
            for (auto it = localvar[k].begin(); it != localvar[k].end(); ++it) {
                for (auto itfunc = funcvar.begin(); itfunc != funcvar.end(); ++itfunc) {
                    string te = (*itfunc).first +";"+ (*it).first+";"+(*it).second;
                    if ((*itfunc).first == (*it).first && (*it).second!="") {
                        (*itfunc).second = (*it).second;
                        break;
                    }
                }
            }
        }

        for (auto it = funcvar.begin(); it != funcvar.end();) {
            string te  = (*it).first +";"+(*it).second;
          if ((*it).second == ""){
           //   auto iterase = it;
              //it++;
              it = funcvar.erase(it);
            //  if (funcvar.empty())break;
               // --it;
            }
          else ++it;
        }
    }

    //TEST NAME EXISTING
    while ((findName = source.find(outname, findName)) != string::npos) {
        findName += outname.length();
        string teststring = "";
        for (long long pos = findName; pos >= 0 && source[pos] != '\n'; pos--)
            teststring = source[pos] + teststring;
        for (long long pos = findName + 1; pos<source.length() && source[pos] != '\n'; pos++)
            teststring += source[pos];
        if (regex_match(teststring, regFunc)) {
            if (outname.substr(0,4) == "func") {
                smatch m;
                regex_search(teststring, m, split);
                string compare = m.str();
                compare.pop_back();
                for (unsigned t = 0; t < compare.length(); t++) if (compare[t] == 32)compare.erase(t, 1);
                if (compare == outname) {
                    if (compare.size()>4){
                            compare = "func" + to_string(atoi(compare.substr(4).c_str())+1);
                  }
                    else compare += "1";
                }
                outname = compare;
            }
            else return source;
        }
    }

    //CREATING METHODS
    string methodsString = "void " + outname + "(";
    for (auto it = funcvar.begin(); it != funcvar.end(); ++it) {
        methodsString += ((*it).second + " &" + (*it).first + ", ");
    }
    if (!funcvar.empty()) {
        methodsString.pop_back();
        methodsString.pop_back();
    }
    methodsString += "){\n" + temp_selected + "}\n\n";

    //FIND A PLACE FOR NEW METHODS AND INSERT METHODS

    string methDeclaration = outname + "(";
    for (auto it = funcvar.begin(); it != funcvar.end(); ++it) {
         methDeclaration += ((((*it).first[0]=='*')?(*it).first.substr(1):(*it).first) + ", ");
    }
    if (!funcvar.empty()) {
        methDeclaration.pop_back();
        methDeclaration.pop_back();
    }

    methDeclaration += ");\n";
    unsigned start_pos = 0;
    while ((start_pos = source.find(temp_selected, start_pos)) != string::npos) {
        source.replace(start_pos, temp_selected.length(), methDeclaration);
        start_pos += methDeclaration.length();
    }

    source.insert(end, methodsString);

    // cout << endl << source << endl;
    return source;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

string Refactoring::inlineProcedure(string text,string selected){
    regex regFunc("^\\s*[A-Za-z_]\\w*\\s{0,}[ *&]\\s*[A-Za-z_]\\w*\\s*\\(.*\\)(//.*){0,1}\\s*\\{{0,1}\\n{0,}");
    regex bodyFunc("^\\{(.*\\n*)*\\}\\n*");
    regex callFunc("^\\(\\s*.*\\s*(\\,\\s*.*\\s*){0,}\\)\\s*\\;");
    //проверка является ли это фунцией
    string selectedLine1 = selected.substr(0, selected.find('\n') + 1);
    if (selectedLine1 == "")
        selectedLine1 = selected.substr(0, selected.find('{') + 1);;
    int couter = 0;
    int gap = 0;
    //удаляем пробелы
    while (selectedLine1[0] == ' ' || selectedLine1[0] == '\t')
    {
        selectedLine1.erase(0, 1);
        gap++;
    }
    //считаем количество параметров (находим тип параметров)
    for (int i = 0; i < selectedLine1.length(); i++)
    {
        if (selectedLine1[i] == ',')
            couter++;
    }
    //проверка на обявление функции
    if (regex_match(selectedLine1, regFunc))

    {
        string s2 = selected.substr(selected.find('{'), selected.length() + 1);
        //проверка на наличие тела функции
        if (regex_match(s2, bodyFunc))
            //поиск переменных
        {

            string proclamation = selectedLine1;

            //выделяем название функции
            selectedLine1 = selectedLine1.substr(min(selectedLine1.find(' '), selectedLine1.find('*'))+1, selectedLine1.find('(') - min(selectedLine1.find(' '), selectedLine1.find('*'))-1);
            while (selectedLine1[0] == ' ' || selectedLine1[selectedLine1.length() - 1] == ' ')
            {
                if (selectedLine1[0] == ' ')
                    selectedLine1.erase(0, 1);
                if (selectedLine1[selectedLine1.length() - 1] == ' ')
                    selectedLine1.erase(selectedLine1.length() - 1, 1);
            }
            int findplace = 0;
            //удаляем выделенный текст
            int size_name = selectedLine1.length();
            text.erase(text.find(selected), selected.length());
            selected = selectedLine1;

            do
            {

                //поиск вызовов фунции
                findplace = text.find(selected, findplace) + size_name;
                if (findplace > size_name)
                {
                    selectedLine1 = "";
                    int k = 0;
                    while (text[findplace - 1] != ';')
                    {
                        selectedLine1 += text[findplace];
                        findplace++;
                        if (text[findplace] == ',')
                            k++;
                    }
                    if (regex_match(selectedLine1, callFunc) && k == couter)
                        //зaвменить вызов в тексте на s2
                    {
                        s2.replace(s2.find("return"), 6, proclamation.substr(0, min(proclamation.find(' '), proclamation.find('*'))) + " myreturn =");
                        text.replace(findplace - selectedLine1.length() - size_name, selectedLine1.length() + size_name, s2);
                    }
                }
            } while (findplace > size_name);
            //проверка на обявление фунции без реализации
            int i1 = text.find(proclamation.substr(0, proclamation.find('(')));
            if (i1 >= 0)
            {
                int i = i1 + proclamation.find('(');
                int k = 0;
                //проверка перегрузок
                while (text[i] != ')')
                {
                    if (text[i] == ',')
                        k++;
                    i++;
                }
                if (k == couter)
                    text.erase(i1, text.find(';', i1) - i1 + 1);
            }
        }
    }
    return text;

}
bool Refactoring::isNameOfVariable(QChar ch) const {
    return ((ch >= QChar('a') && ch <= QChar('z')) || (ch >= QChar('A') && ch <= QChar('Z')) || ch == QChar('_') || (ch >= QChar('0') && ch <= QChar('9')));
}

QString Refactoring::rename(QString sourceCode, QString sourceVar, QString resultVar) {
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

QString Refactoring::formatting(QString sourceCode) {
    alignToLeftSide(sourceCode);
    alignScopes(sourceCode);
    alignBlocks(sourceCode, 0, sourceCode.size(), 0);
    alignBlocksWithoutScopes(sourceCode,
            QRegularExpression("if\\s*\\(*.*\\)\\s*\\n\\s*(?!\\{)\\b"));
    alignBlocksWithoutScopes(sourceCode,
            QRegularExpression("for\\s*\\(*.*\\)\\s*\\n\\s*(?!\\{)\\b"));
    alignBlocksWithoutScopes(sourceCode,
            QRegularExpression("while\\s*\\(*.*\\)\\s*\\n\\s*(?!\\{)\\b"));
    return sourceCode;
}
void Refactoring::alignBlocksWithoutScopes(QString & sourceCode,
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

void Refactoring::alignToLeftSide(QString &text)
{
    text.replace(QRegExp("\\n\\s+|\\t+\\<"),"\n");
}
bool Refactoring::checkOnComment(QString &text, int start)
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
void Refactoring::alignScopes(QString &text)
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
int Refactoring::alignBlocks(QString & text, int start, int end, int count)
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
void Refactoring::addDelimiters(QString &text,int &start, int & end, int count)
{
    text.insert(start+1, QString(count*4, ' '));
    end += count * 4;
}
