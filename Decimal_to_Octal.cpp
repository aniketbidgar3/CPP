#include <bits/stdc++.h>
using namespace std;

int toOctal(int n)
{
    int ans = 0;
    int p8 = 1;

    while (p8 < n)
    {
        p8 *= 8;
    }
    p8 /= 8;

    while (n > 0)
    {
        int last = n / p8;
        n -= last * 8;
        p8 /= 8;
        ans = ans * 10 + last;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Decimal Number : ";
    cin >> n;
    cout << toOctal(n);

    return 0;
}
