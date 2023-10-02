#include <bits/stdc++.h>
using namespace std;
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}
int main()
{
    int a, b;
    cout << "Enter Number and its Power : ";
    cin >> a >> b;
    cout << power(a, b);

    return 0;
}