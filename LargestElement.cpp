#include <bits/stdc++.h>
using namespace std;

int Large(int arr[], int n)
{

    int max = -999999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            continue;
        }
    }
    return max;
}

int main()
{
    int n = 0;
    cout << "Enter Size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Largest Number is : " << Large(arr, n);

    return 0;
}