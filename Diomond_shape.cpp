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
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int l = 0; l < 2 * i + 1; l++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}