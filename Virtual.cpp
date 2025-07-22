#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void hello() = 0;
    // virtual void show() = 0;
    // {
    //     cout << "Hello I am Parent"<<endl;
    // }
};

class Child : public Parent
{
public:
    void hello()
    {
        cout << "Hello I am Child";
    }
    void show()
    {
        cout << "Hello I am Child";
    }
};
int main()
{
    // Parent p;
    // p.hello();
    Child c;
    c.hello();

    return 0;
}