#include <bits/stdc++.h>

using namespace std;
int a[2501];
int dp[200000];
int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int n, m;

    cin >> n >> m;

    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = t; j >= w[i]; j--)
    //     {
    //         dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    //     }
    //
    // }
    cout << dp[t];

    return 0;
}
