#include <iostream>
using namespace std;

int main()
{

    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZA";
    int n = s.length();

    for (int j = 0; j < 3; j++)
    {

        if (j % 2 == 0)
        {
            int k = 0;
            for (int i = j; i < n; i = i + 2)
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
        }
        else
        {
            for (int i = 1; i < n; i = i + 2)
            {
                cout << s[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}