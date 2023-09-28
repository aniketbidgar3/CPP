#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int NextTerm;

    cout << "Fibonacci Number Upto number " << n << " are : ";

    while (t1 <= n)
    {
        cout << t1 << " ";
        NextTerm = t1 + t2;
        t1 = t2;
        t2 = NextTerm;
    }
}

int main()
{

    int n;

    cout << "Enter Number : ";
    cin >> n;
    fibonacci(n);

    return 0;
}