#include <QtTest>
#include "exam_server_func.h"
// add necessary includes here

class exam_server_func_test : public QObject
{
    Q_OBJECT

public:
    exam_server_func_test();
    ~exam_server_func_test();

private slots:
    void test_case1();

};

exam_server_func_test::exam_server_func_test()
{

}

exam_server_func_test::~exam_server_func_test()
{

}

void exam_server_func_test::test_case1()
{
//QVERIFY(parsing("hkblhbldusvhnbsj")=="check is thing work");
QVERIFY2(parsing("hkblhbldusvhnbsj",123)=="check is thing work","parsing(hkblhbldusvhnbsj)!=check is thing work");
}

QTEST_APPLESS_MAIN(func_for_server_test)

#include "tst_exam_server_func_test.moc"