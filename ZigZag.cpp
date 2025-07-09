#include <iostream>
using namespace std;

int main()
{

    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZA";
    int k = 0;
    for (int i = 0; i < s.length(); i = i + 2)
    {

        if (k == 0)
        {

            cout << s[i] << " ";
            k = 1;
        }
        else
        {
            cout << "  ";
            k = 0;
        }
    }
    cout << "\n";
    for (int i = 1; i < s.length(); i = i + 2)
    {
        cout << s[i] << " ";
    }
    cout << "\n";
    int j = 0;
    for (int i = 2; i < s.length(); i = i + 2)
    {
        if (j == 0)
        {

            cout << s[i] << " ";
            j = 1;
        }
        else
        {
            cout << "  ";
            j = 0;
        }
    }

    return 0;
}