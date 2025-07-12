#include <iostream>
using namespace std;

void binarySearch(){
     int n;
    cout << "Enter Size : ";
    cin >> n;

    int arr[n];
    cout << "Enter ELements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Search Element : ";
    cin >> key;

    int st = 0;
    int end = n - 1;

    int index = -1;
    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (arr[mid] == key)
        {
            index = mid;
            break;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    cout << "Element Found at Position : " << index + 1;
}

int main()
{
   
    binarySearch();
    return 0;
}