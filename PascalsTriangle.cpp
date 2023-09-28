#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int Combination(int n, int r)
{
    int c = factorial(n) / (factorial(r) * factorial(n - r));
    return c;
}

int main()
{
    int row;
    cout << "Enter Number of Rows : ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << Combination(i, j) << " ";
        }
        cout << "\n";
    }

    return 0;
}