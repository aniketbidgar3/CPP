#include <bits/stdc++.h>
using namespace std;
bool CheckAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

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

    string s, t;
    cout << "Enter Two Strings Seperated by Space : ";
    cin >> s >> t;
    if (CheckAnagram(s, t))
    {
        cout << "Both Strings are Anagram of Each Other!";
    }
    else
    {
        cout << "Both Strings are Not Anagram of Each Other!";
    }
    return 0;
}