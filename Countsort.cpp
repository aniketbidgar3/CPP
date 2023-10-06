#include <bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n, int m)
{
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(arr[i], k);
    }

    int count[m] = {0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    int output[n];

    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int n, m;
    cout << "Enter No. of Elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter Range of Elements : ";
    cin >> m;
    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countsort(arr, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}