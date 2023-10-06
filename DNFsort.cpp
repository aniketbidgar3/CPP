#include <bits/stdc++.h>
using namespace std;

void dnf(int arr[], int n)
{

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid < high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid == 1])
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    cout << "only Enter Elements 0,1,2 ";
    int n;
    cout << "Enter No. of Elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dnf(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}