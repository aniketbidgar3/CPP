#include <bits/stdc++.h>
using namespace std;

int toDecimal(int n)
{
    int ans = 0;
    int p8 = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans += p8 * lastDigit;
        p8 *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a Binary number : ";
    cin >> n;
    cout << toDecimal(n);

    return 0;
}