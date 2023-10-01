#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world ";
    string t = "How are You ?? ";

    cout << s + t << endl;

    //  function Append() is used to append string
    s.append(t);
    // output : Hello world How are You ??
    cout << s << endl;

    // this function erase 5 characters from index 6
    s.erase(6, 5);
    // output : Hello  How are You ??
    cout << s << endl;

    // this function return index of first character of string which we have to find
    cout << s.find("How") << endl;
    // output : 7

    // this function inserts the given string at given index
    s.insert(6, "World");
    // output : Hello World How are You ??
    cout << s << endl;

    // this function returns length of string
    cout << s.length() << endl;
    // output : 27

    // this function returns substring
    t = s.substr(12, 14);
    // output : How are You ??
    cout << t << endl;

    // this function converts string to integer
    string n = "1234";
    cout << n + "5" << endl;
    // output : 12345

    int m = stoi(n);
    cout << m + 5 << endl;
    // output : 1239

    // this function converts integer to string
    cout << to_string(m) + "5" << endl;
    // output : 12345

    // this function sorts all characters of string in increasing order
    string a = "qwertyuiopadsfghjklzxcvbnm";
    sort(a.begin(), a.end());
    cout << a << endl;
    // output : "abcdefghijklmnopqrstuvwxyz"  it also includes spaces

    // this is the logic to convert string to uppercase
    for (int i = 0; i < a.length(); i++)
    {
        a[i] -= 32;
    }

    cout << a << endl;
    // output : ABCDEFGHIJKLMNOPQRSTUVWXYZ

    // this is the logic to convert string to lowercase
    for (int i = 0; i < a.length(); i++)
    {
        a[i] += 32;
    }

    cout << a << endl;
    // output : abcdefghijklmnopqrstuvwxyz

    // inbuilt function to convert string into uppercase
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    cout << a << endl;
    // output : ABCDEFGHIJKLMNOPQRSTUVWXYZ

    // inbuilt function to convert string into lowercase
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout << a << endl;
    // output : abcdefghijklmnopqrstuvwxyz

    // convert the numeric string to greatest number made my combination of numbers
    string x = "45379235";
    sort(x.begin(), x.end(), greater<int>());
    cout << x << endl;
    // output : 97554332

    return 0;
}