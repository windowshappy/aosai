#include<bits/stdc++.h>

using namespace std;

int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int t, m;
    int w[101], v[101];
    cin >> t >> m;
    int dp[10000];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < m; i++)
    {
        cin >> w[i] >> v[i];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = t; j >= w[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
        
    }
    cout << dp[t];

    return 0;
}
