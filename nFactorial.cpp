#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = n; i > 2; i--)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    cout << "Enter The Number : ";
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n);
    return 0;
}