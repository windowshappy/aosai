#include<bits/stdc++.h>

using namespace std;

int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int n;
    int w[101];
    cin >> n;
    int dp[10000];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
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
