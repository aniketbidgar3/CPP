#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void hello() = 0;
    virtual void show() = 0;

    void practice(){
        cout<<"Welcome \n";
    }
};

class Child : public Parent
{
public:
    void hello()
    {
        cout << "Hello World\n";
    }
    void show()
    {
        cout << "Hello I am Child\n";
    }
};
int main()
{

    Child c;
    // c.hello();
    // c.show();
    c.practice();

    return 0;
}