#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string s)
{
    string t = string(s.rbegin(), s.rend());

    if (s == t)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cout << "Enter String : ";
    cin >> s;
    if (CheckPalindrome(s))
    {
        cout << "Given String is a Palindrome !";
    }
    else
    {
        cout << "Given String is Not a Palindrome !";
    }

    return 0;
}