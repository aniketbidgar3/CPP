#include <bits/stdc++.h>
using namespace std;

void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i - 1] < arr[i])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
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

    waveSort(arr, n);

    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}