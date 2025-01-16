#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Number is Prime !";
    }
    else
    {
        cout << "Number is Not Prime !";
    }

    return 0;
}