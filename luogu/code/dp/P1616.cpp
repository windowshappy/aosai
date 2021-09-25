#include <bits/stdc++.h>

using namespace std;
long long dp[10000000];
long long w[10001], v[10001];
int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int t, m;

    cin >> t >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> w[i] >> v[i];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = w[i]; j <= t; j++)
        {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[t];

    return 0;
}
