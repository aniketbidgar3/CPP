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

    cout << "\nPrime Numbers Between 1 to " << n << " are : ";

    for (int i = 0; i < n; i++)
    {

        bool a = Prime(i);

        if (a)
        {
            cout << i << " ";
        }
    }

    cout << "\n\n";

    return 0;
}