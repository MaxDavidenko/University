#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include "modelFromFile.h"
class UTest : public QObject
{
    Q_OBJECT

public:
    UTest();

private Q_SLOTS:
    void CheckBlackListModel();
    void CheckTaskListModel();
    void CheckTaskListModelFail();
    void CheckBlackListModelFail();
};

UTest::UTest()
{
}

void UTest::CheckBlackListModel()
{
    ModelWrapperFromFile bmodel("/proc/binperm/blacklist");
    QVERIFY(bmodel.getDataFromFile (bmodel.getFileName ()) == 0);
    QVERIFY(bmodel.getModel() != NULL);
}
void UTest::CheckBlackListModelFail()
{
    ModelWrapperFromFile bmodel("/proc/binperm/blacklst");
    QVERIFY(bmodel.getDataFromFile (bmodel.getFileName ()) == -1);
    QVERIFY(bmodel.getModel () == NULL);

}
void UTest::CheckTaskListModel()
{
    ModelWrapperFromFile pmodel("/proc/binperm/tasklst");
    QVERIFY(pmodel.getDataFromFile (pmodel.getFileName ()) == 0);
    QVERIFY(pmodel.getModel() != NULL);
}

void UTest::CheckTaskListModelFail()
{
    ModelWrapperFromFile pmodel("/proc/binperm/tasklist");
    QVERIFY(pmodel.getDataFromFile (pmodel.getFileName ()) == -1);
    QVERIFY(pmodel.getModel() == NULL);

}

QTEST_MAIN(UTest)
#include "utest.moc"
