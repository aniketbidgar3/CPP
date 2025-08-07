#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void hello() = 0;
    virtual void show() = 0;
};

class Child : public Parent
{
public:
    void hello()
    {
        cout << "Hello World";
    }
    void show()
    {
        cout << "Hello I am Child";
    }
};
int main()
{

    Child c;
    c.hello();
    c.show();

    return 0;
}