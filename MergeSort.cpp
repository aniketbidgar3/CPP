#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int f, int m, int r)
{
    int n1 = m - f + 1;
    int n2 = r - m;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[f + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[m + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = f;

    while (i < n1 && j < n2)
    {
        if (a[i] > b[j])
        {
            arr[k] = b[j];
            j++;
            k++;
        }
        else
        {
            arr[k] = a[i];
            i++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void Mergesort(int arr[], int f, int r)
{
    if (f < r)
    {
        int m = (f + r) / 2;
        Mergesort(arr, f, m);
        Mergesort(arr, m + 1, r);

        Merge(arr, f, m, r);
    }
}

int main()
{

    int arr[] = {5, 2, 7, 1, 0};
    Mergesort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}