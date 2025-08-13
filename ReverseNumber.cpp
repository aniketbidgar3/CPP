#include <iostream>
using namespace std;

int main()
{
    int n, m = 0;
    int count = 0;

    cout << "Enter Number : ";
    cin >> n;

    while (n != 0)
    {

        m = n % 10;
        count = count * 10 + m;
        n = n / 10;
    }

    cout << "Reversed Number is : " << count;

    return 0;
}
