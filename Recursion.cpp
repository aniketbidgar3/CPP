#include <bits/stdc++.h>
using namespace std;

// Return Power of Number With help of Recursion
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}

// Return sum  of Numbers from 0 to n With help of Recursion
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

// Return factorial of Number With help of Recursion
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// Return nth fibonacci Number With help of Recursion
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int a, b;
    cout << "Enter Number and its Power : ";
    cin >> a >> b;
    cout << a << "^" << b << " : " << power(a, b) << endl;

    cout << "sum of Number from 0 to " << a << " is : " << sum(a) << endl;

    cout << a << "! : " << factorial(a) << endl;

    cout << a << "'th fibonacci number is :  " << fibonacci(a) << endl;

    return 0;
}