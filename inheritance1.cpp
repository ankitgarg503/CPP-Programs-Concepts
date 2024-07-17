#include <iostream>

using namespace std;

class Parent
{
    int var1;

public:
    int var2;
    void setData();
    int getData1();
    int getData2();
};

void Parent::setData(void)
{
    var1 = 100;
    var2 = 200;
}
int Parent::getData1(void)
{
    return var1;
}
int Parent::getData2(void)
{
    return var2;
}

class Child : private Parent
{
    int var3;

public:
    void process();
    void Display();
};

void Child::process(void)
{
    setData();
    getData1();
    getData2();
    var3 = var2 + getData1();
}
void Child::Display(void)
{
    cout << "Var1=" << getData1() << endl;
    cout << "Var2=" << var2 << endl;
    cout << "Var3=" << var3 << endl;
}

int main()
{

    Child c1;
    //    c1.setData();
    //    c1.getData1();
    //    c1.getData2();
    c1.process();
    c1.Display();

    return 0;
}