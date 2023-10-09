#include <bits/stdc++.h>
using namespace std;
class Polymorphism
{
private:
public:
    Polymorphism()
    {
        cout << "\nConstructor called \n\n";
    }

    // Function Overloading

    void add(int a, int b)
    {
        cout << a + b << endl;
    }

    void add(double a, double b)
    {
        cout << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }

    ~Polymorphism()
    {
        cout << "\nDestructor called \n";
    }
};

class Operator
{
private:
    int real, img;

public:
    Operator(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Operator operator + (Operator const &a)
    {
        Operator res;
        res.real = real + a.real;
        res.img = img + a.img;
        return res;
    }

    void Display()
    {
        cout << real << "+" << img << "i";
    }
};

int main()
{
    Polymorphism p;
    p.add(10, 11);
    p.add(15.13, 11.17);
    p.add(23, 65, 127);

    Operator o(12, 3);
    Operator p(23, 7);
    // Operator q = o + p; 
    q.Display();

    return 0;
}