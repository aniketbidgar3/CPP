#include <bits/stdc++.h>
using namespace std;
int toDecimal(string s)
{
    int ans = 0;
    int p16 = 1;

    int len = s.length();

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans += p16 * (s[i] - '0');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            ans += p16 * (s[i] - 'A' + 10);
        }

        p16 *= 16;
    }

    return ans;
}

int main()
{
    string s;
    cout << "Enter Hexadecimal Number : ";
    cin >> s;
    cout << toDecimal(s);
    return 0;
}