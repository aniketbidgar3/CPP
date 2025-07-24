#include <iostream>
using namespace std;

int main()
{
    int hashTable[10];
    int n = 10, num;

    for (int i = 0; i < 10; i++)
    {
        hashTable[i] = -1;
    }

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        int index = num % 10;

        int startIndex = index;
        while (hashTable[index] != -1)
        {
            index = (index + 1) % 10;
            if (index == startIndex)
            {
                cout << "Hash table is full, cannot insert " << num << endl;
                break;
            }
        }

        if (hashTable[index] == -1)
        {
            hashTable[index] = num;
        }
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Index " << i << ": ";
        if (hashTable[i] == -1)
            cout << "Empty" << endl;
        else
            cout << hashTable[i] << endl;
    }

    return 0;
}
