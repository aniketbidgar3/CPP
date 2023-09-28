#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void pythgorus(int a, int b, int c)
{
    int x, y, z;

    x = max(a, max(b, c));

    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }

    if (x * x == y * y + z * z)
    {
        cout << "given Numbers are Pythagorus Triplet";
    }
    else
    {
        cout << "given Numbers are Not Pythagorus Triplet";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three Numbers : ";
    cin >> a >> b >> c;
    pythgorus(a, b, c);

    return 0;
}