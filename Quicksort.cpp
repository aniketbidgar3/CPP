#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int l, int r)
{
    int pi = arr[r];

    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pi)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void Quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = Partition(arr, l, r);
        Quicksort(arr, l, pi - 1);
        Quicksort(arr, pi + 1, r);
    }
}

int main()
{

    int n;
    cout << "Enter Length Of Array : ";
    cin >> n;
    int arr[n];

    cout << "Enter Elements here : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Quicksort(arr, 0, n - 1);

    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}