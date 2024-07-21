#include <bits/stdc++.h>
using namespace std;

string toHexadecimal(int n)
{
    int p16 = 1;
    string ans = "";

    while (p16 <= n)
    {
        p16 *= 16;
    }
    p16 /= 16;

    while (n > 0)
    {
        int last = n / p16;
        n -= last * p16;
        p16 /= 16;

        if (last <= 9)
        {
            ans = ans + to_string(last);
        }
        else
        {
            ans = 'A' + last - 10;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Decimal Number : ";
    cin >> n;
    cout << toHexadecimal(n);

    return 0;
}