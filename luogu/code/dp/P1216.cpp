#include <bits/stdc++.h>

using namespace std;
int dp[1001][1001];
int w[1001][1001];
int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int r;

    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cin >> w[i][j];
        }
    }
    dp[1][1] = w[1][1];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            dp[i][j] = max(dp[i-1][j] + w[i][j], dp[i-1][j-1]+w[i][j]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= r; i++)
    {
        if(dp[r][i]>ans)
            ans = dp[r][i];
    }
    
    cout << ans;

    return 0;
}
