#include <QCoreApplication>
#include <QtTest>

// add necessary includes here

class tst : public QObject
{
    Q_OBJECT

public:
    tst();
    ~tst();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();
};

tst::tst() {}

tst::~tst() {}

void tst::initTestCase() {}

void tst::cleanupTestCase() {}

void tst::test_case1() {}

QTEST_MAIN(tst)

#include "tst_tst.moc"
