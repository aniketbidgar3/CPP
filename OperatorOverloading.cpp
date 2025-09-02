#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    
    Complex operator -(Complex &obj)
    {
        Complex res;
        res.real = real - obj.real;
        res.img = img - obj.img;
        return res;
    }

    void Display()
    {
        cout << real << " + " << img << " i\n";
    }
};



int main()
{
    // int a, b, c, d;

    // cout << "Enter First Complex Number : ";
    // cin >> a >> b;
    // cout << "Enter Second Complex Number : ";
    // cin >> c >> d;

    // Complex o(a, b);
    // cout << "First Complex Number : ";
    // o.Display();
    // Complex p(c, d);
    // cout << "Second Complex Number : ";
    // p.Display();
    // Complex q = o + p;

    // cout << "The Sum of Two Complex Numbers is : ";
    // q.Display();

    Complex c1(2,3);
    c1.Display();
    Complex c2(3,5);
    c2.Display();

    Complex c3=c1+c2;
    c3.Display();

    Complex c4=c2-c1;
    c4.Display();


    return 0;
}
