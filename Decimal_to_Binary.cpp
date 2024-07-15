#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int next, ans = 0;
    while (n != 0)
    {
        next = n % 10;
        ans = ans * 10 + next;
        n /= 10;
    }

    return ans;
}

int toBinary(int n)
{
    int arr[10];

    
}

int main()
{
    int n;
    cout << "Enter a Binary number : ";
    cin >> n;
    // cout << toDecimal(n);
    cout << reverse(n);
    return 0;
}
