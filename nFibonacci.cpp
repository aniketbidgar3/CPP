#include <bits/stdc++.h>
using namespace std;

vector<int> nFibonacci(int n)
{
    vector<int> ans;
    int first = 0;
    int second = 1;
    int nextTerm = 0;
    ans.push_back(first);
    ans.push_back(second);

    for (int i = 0; i < n - 2; i++)
    {
        nextTerm = first + second;
        ans.push_back(nextTerm);
        first = second;
        second = nextTerm;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    vector<int> ans;
    ans = nFibonacci(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
