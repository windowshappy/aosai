#include<bits/stdc++.h>

using namespace std;

int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int t, m, ans = 0;
    int w[101], v[101];
    cin >> t >> m;
    int dp[30001];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < m; i++)
    {
        cin >> w[i] >> v[i];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = t; j >= w[i]; j--)
        {
            dp[j] = max(dp[j], (dp[j - w[i]] + v[i]*w[i]));
            
        }
    }
    cout << dp[t];

    return 0;
}
