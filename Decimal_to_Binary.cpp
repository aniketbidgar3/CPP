#include <bits/stdc++.h>
using namespace std;

int toBinary(int n)
{
    int p2 = 1;
    int ans = 0;
    while (p2 <= n)
    {
        p2 *= 2;
    }
    p2 /= 2;

    while (n > 0)
    {
        int last = n / p2;
        n -= last * p2;
        p2 /= 2;
        ans = ans * 10 + last;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter a Binary number : ";
    cin >> n;
    cout << toBinary(n);

    return 0;
}
