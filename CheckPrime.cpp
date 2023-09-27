#include <bits/stdc++.h>
using namespace std;

bool Prime(int n)
{

    int i = 2;
    while (i <= sqrt(n))
    {

        if (n % i == 0)
        {
            return 0;
        }

        i++;
    }
    return 1;
}

int main()
{

    int n;
    cout << "\n\nEnter Number : ";
    cin >> n;
    bool m = Prime(n);
    if (n <= 0)
    {
        cout << "Please Enter Number Greater than 0";
    }
    else if (m == 1)
    {
        cout << "Number is Prime ";
    }
    else
    {

        cout << "Number is Not Prime ";
    }

    return 0;
}