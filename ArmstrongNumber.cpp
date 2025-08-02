#include <iostream>
using namespace std;

int main()
{
    int n, m = 0;
    int count = 0;

    cout << "Enter Number : ";
    cin >> n;

    int Number = n;

    while (n != 0)
    {

        m = n % 10;
        count = count + (m * m * m);
        n = n / 10;
    }

    if (Number == count)
    {

        cout << "Number is Armstrong Number ";
    }
    else
    {
        cout << "Number is Not Armstrong Number ";
    }

    cin.ignore();

    cin.get();
    
    return 0;
}