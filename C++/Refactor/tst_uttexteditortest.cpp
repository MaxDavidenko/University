#include <QtTest>
#include "refactor.h"
#include <iostream>
class UTTextEditorTest : public QObject
{
    Q_OBJECT
private:
    Refactor corrector;
    
public:
    UTTextEditorTest();
    
private Q_SLOTS:
    void testCase1();
    void testCase2();
    void testCase3();
    void testCase4();
    void testCase5();
    void testCase6();
    void testCase7();
    void testCase8();
    void testCase9();
    void testCase10();
    void testCase11();
    void testCase12();
    void testCase13();
    void testCase14();
    void testCase15();
    void testCase16();
    void testCase17();
    void testCase18();
    void testCase19();
    void testCase20();
};

UTTextEditorTest::UTTextEditorTest()
{
}

void UTTextEditorTest::testCase1()
{
    QCOMPARE(corrector.rename("int a = 10;", "a", "count_"), QString("int count_ = 10;"));
}

void UTTextEditorTest::testCase2()
{
    QCOMPARE(corrector.rename("int a = 10;", "a", "a"), QString("int a = 10;"));
}

void UTTextEditorTest::testCase3()
{
    QCOMPARE(corrector.rename("int a = 10; // a is new variable", "a", "count_"), QString("int count_ = 10; // a is new variable"));
}

void UTTextEditorTest::testCase4()
{
    QCOMPARE(corrector.rename("int a = 10; /n int aa = 11", "a", "b"), QString("int b = 10; /n int aa = 11"));
}

void UTTextEditorTest::testCase5()
{
    QCOMPARE(corrector.rename("int a = 10; //a first value/n int aa = 11", "a", "count_"),
                             QString("int count_ = 10; //a first value/n int aa = 11"));
}

void UTTextEditorTest::testCase6()
{
    QCOMPARE(corrector.rename("int a_ = 10; //a first value/n int aa = 11", "a", "count_"),
                             QString("int a_ = 10; //a first value/n int aa = 11"));
}


//TODO: refoactoring
void UTTextEditorTest::testCase7()
{
    QCOMPARE(corrector.rename("int a; int aa; int aaa;", "aa", "b"),
                             QString("int a; int b; int aaa;"));
}

void UTTextEditorTest::testCase8()
{
    QCOMPARE(corrector.rename("int a, b, c", "b", "aa"),
                             QString("int a, aa, c"));
}

void UTTextEditorTest::testCase9()
{
    QCOMPARE(corrector.rename("int a, b, c;//b = 5", "b", "aa"),
                             QString("int a, aa, c;//b = 5"));
}

void UTTextEditorTest::testCase10()
{
    QCOMPARE(corrector.rename("int i", "int", "float"),
                             QString("float i"));
}

void UTTextEditorTest::testCase11()
{
    QCOMPARE(corrector.formatting("int sqr() { int a = 5;\nreturn a*a;\n}"),
             QString("int sqr() \n"
                     "{\n"
                     "    int a = 5;\n"
                     "    return a*a;\n"
                     "}"));
}

void UTTextEditorTest::testCase12()
{
    QString str("int sqr() \n"
                "{\n"
                "    int a = 5;\n"
                "    return a*a;\n"
                "}");
    std:: cout << str.toStdString() << "\n";
    QCOMPARE(corrector.formatting("int sqr() {\n int a = 5;\nreturn a*a;\n}"),
             //QString("int sqr()"
             //"{\n"
            // "    int a = 5;\n"
            // "    return a*a;\n"
             /*"}"*/ str);
}

void UTTextEditorTest::testCase13()
{

    QString str("int f() \n"
                "{\n"
                "    int a = 5;\n"
                "    while(a > 0) \n"
                "    {\n "
                "       --a;\n"
                "    }\n"
                "    return a*a;\n"
                "}");
    QCOMPARE(corrector.formatting("int f() {\n int a = 5;\nwhile(a > 0) {"
                            " --a;\n }\n return a*a;\n }"),
    str);
}
void UTTextEditorTest::testCase14()
{
    QCOMPARE(corrector.formatting(" {static int MODE = FIGHT;"
                            "\n if (currentMode == FIGHT){\n"
                            "timer.start());\n}\n}"),

             QString(" \n{\n"
                     "    static int MODE = FIGHT;\n"
                     "    if (currentMode == FIGHT)\n"
                     "    {\n"
                     "        timer.start());\n"
                     "    }\n"
                     "}"));
}
void UTTextEditorTest::testCase15()
{
    QCOMPARE(corrector.formatting("while (!writer.eof()){ writer >> str;\n"
                             "if(str.find(\"12345 the rabbit went to the light\" {\n"
                             "cout<< m;\n}\n}"),
            QString("while (!writer.eof())\n"
                    "{\n"
                    "    writer >> str;\n"
                    "    if(str.find(\"12345 the rabbit went to the light\"\n"
                    "    {\n"
                    "        cout<< m;\n"
                    "    }\n"
                    "}"));
}

void UTTextEditorTest::testCase16()
{
    QCOMPARE(corrector.formatting("{\nint a = 10;\n{\n int b = 10;\n{\n int c = 11; {\nint d = 12;\n"
                            "{\n bool res = a == b == c == d? true:false;\n }\n}\n}\n}\n}"),
             QString("{\n"
                     "    int a = 10;\n"
                     "    {\n"
                     "        int b = 10;\n"
                     "        {\n"
                     "            int c = 11;"
                     "            {\n"
                     "                int d = 12;\n"
                     "                {\n"
                     "                    bool res = a == b == c == d? true:false;\n"
                     "                }\n"
                     "            }\n}"
                     "        }\n"
                     "}"));
}

void UTTextEditorTest::testCase17()
{
    QCOMPARE(corrector.formatting("while (!writer.eof()){ writer >> str;\n "
                                  "if(str.find(\"12345 the rabbit went to the light\")\n"
                                  "//cout<<\"Wow!\";\n}"),
             QString("while (!writer.eof())\n"
                     "{"
                     "     writer >> str;\n"
                     "     /*if(str.find(\"12345 the rabbit went to the light\")\n {*/"
                     "     cout<<\"Wow!\";\n"
                     "}"));
    }
void UTTextEditorTest::testCase18()
{
    QCOMPARE(corrector.formatting("while (!writer.eof()){ writer >> str;\n "
                             "if(str.find(\"12345 the rabbit went to the light\")\n"
                             "//cout<<\"Wow!\";\n}"),
             QString("while (!writer.eof())\n"
                     "{"
                     "     writer >> str;\n"
                     "     if(str.find(\"12345 the rabbit went to the light\")\n"
                     "     //cout<<\"Wow!\";\n"
                     "}"));
}

void UTTextEditorTest::testCase19()
{
    QCOMPARE(corrector.formatting("while (!writer.eof()){ writer >> str;\n "
                            "/\nif(str.find(\"12345 the rabbit went to the light\"{\n"
                            "/\\*cout<< \"(c)Max\";\n}\\*/\n cout<<\"Wow!\";\n}\n}"),
                            QString("while (!writer.eof()){ writer >> str;\n "
                            "/\nif(str.find(\"12345 the rabbit went to the light\"{\n"
                            "/\\*cout<< \"(c)Maxxx\";\n}\\*/\n cout<<\"Wow!\";\n}\n}"));
}

void UTTextEditorTest::testCase20()
{
    QCOMPARE(corrector.formatting("while (!writer.eof()){ writer >> str;\n "
                            "/\nif(str.find(\"12345 the rabbit went to the light\"{\n"
                            "/\\*cout<< \"(c)Max\";\n}\\*/\n cout<<\"Wow!\";\n}\n}\n\t"),
                            QString("while (!writer.eof()){ writer >> str;\n "
                            "//if(str.find(\"12345 the rabbit went to the light\"{\n"
                            "\t/\\*cout<< \"(c)Max\";\n}\\*/\n cout<<\"Wow!\";\t\n}\n}\n\t"));
}
QTEST_APPLESS_MAIN(UTTextEditorTest)

#include "tst_uttexteditortest.moc"
