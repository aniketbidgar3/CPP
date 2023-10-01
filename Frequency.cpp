#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    cout << "Enter String : ";
    cin >> s;

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    int maxFreq = 0;
    char ans = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            ans = i + 'a';
        }
    }

cout<<"Maximum Frequency is of Character '"<<ans<<"' and that is "<<maxFreq;
    return 0;
}