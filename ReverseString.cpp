#include <bits/stdc++.h>
using namespace std;

string ReverseString(string s)
{
    string ans = "";
    int n = s.size();

    for (int i = n - 1; i >= 0; i--)
    {
        ans += s[i];
    }

    return ans;
}

int main()
{

    string s;
    cout << "Enter String : ";
    cin >> s;
    cout << ReverseString(s);
    return 0;
}