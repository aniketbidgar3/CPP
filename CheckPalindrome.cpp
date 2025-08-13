#include <bits/stdc++.h>
using namespace std;

bool Palindrome(string p)
{
    bool r = true;
    int n = p.length();

    for (int i = 0; i < n / 2; i++)
    {
        cout << p[i] << " and " << p[n - 1 - i] << "\n";
        if (p[i] != p[n - 1 - i])
        {
            r = false;
        }
    }

    return r;
}

int main()
{
    string p;
    cout << "Enter String : ";
    cin >> p;
    if (Palindrome(p))
    {
        cout << "given String is Palindrome";
    }
    else
    {
        cout << "given String is Not a Palindrome";
    }

    return 0;
}