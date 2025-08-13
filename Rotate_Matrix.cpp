#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Rotate(vector<vector<int>> arr)
{

    int n = arr.size();
    int m = arr[0].size();

    vector<vector<int>> ans(m, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][n - 1 - i] = arr[i][j];
        }
    }

    return ans;
}

int main()
{

    int n, m;
    cout << "Enter size of Matrix : ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> ans = Rotate(arr);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}