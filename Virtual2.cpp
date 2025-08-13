#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show()
    {
        cout << "Hello I am Parent" << endl;
    }
};

class Child : public Parent
{
public:
    void show() override
    {
        cout << "Hello I am Child";
    }
};

int main()
{
    Parent *p;
    Child c;
    p = &c;

    p->show(); // virtula Used hence Child's Method is called When Virtual is not used Parent Method is called

    return 0;
}