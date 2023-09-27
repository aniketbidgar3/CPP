#include <iostream>
using namespace std;

int main()
{
    int row, n, count = 0;
    cout << "Enter Number of Rows : ";
    cin >> n;

    row = n + 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count++ << " ";
        }
        cout << "\n";
    }

    return 0;
}