#include <iostream>
using namespace std;

class Base
{
    string name = "Aniket";
    int age = 22;

public:
    void set(string n, int a)
    {
        name = n;
        age = a;
    }

    friend void print(Base b);
};

void print(Base b)
{
    cout << "Hello I am " << b.name << " and My age is " << b.age << endl;
}

int main()
{

    Base b;
    print(b);

    b.set("Akshada", 17);
    print(b);

    Base b2;
    b2.set("Umera",21);
    print(b2);

    return 0;
}