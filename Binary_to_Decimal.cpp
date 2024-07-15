#include <bits/stdc++.h>
using namespace std;

int toDecimal(int n)
{
    int ans = 0;
    int p2 = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans += p2 * lastDigit;
        p2 *= 2;
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