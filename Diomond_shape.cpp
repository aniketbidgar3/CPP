#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Hello World \n";
    cout << "Enter Number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int l = 0; l < 2 * i + 1; l++)
        {
            if (l == 0 || l == 2 * i - 1)
            {

                cout << "  * ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int l = 0; l < 2 * i + 1; l++)
        {
            if (l == 0 || l == 2 * i - 1)
            {

                cout << "  * ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}