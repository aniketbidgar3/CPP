#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "Print function of Base class \n";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Print function of Derived class \n";
    }
};

int main()
{
    Base b1;
    b1.print();
    Derived d1;
    d1.print();
    Base *b;
    Derived d;
    b = &d;
    b->print();
    return 0;
}