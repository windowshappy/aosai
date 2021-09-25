#include <bits/stdc++.h>

using namespace std;
int dp[2001][2001];
int w[2001][2001];
int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int n, m;

    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> w[j][i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = min(dp[i - 1][j], dp[i - 1][j == 1 ? m : j - 1])+w[i][j];
        }
    }
    int ans = 23423423;
    for (int i = 1; i <= m; i++)
    {
        if (dp[n][i] < ans)
            ans = dp[n][i];
    }

    cout << ans;

    return 0;
}
