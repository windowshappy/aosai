#include <bits/stdc++.h>

using namespace std;

int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int n, x, ans = 0;
    int w[1001], l[1001], v[1001];
    cin >> n >> x;
    int dp[30001];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> w[i] >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >= v[i]; j--)
        {
            dp[j] = max(dp[j] + l[i], (dp[j - v[i]] + w[i]));
        }
        for (int j = v[i]-1; j >=0; j--)
        {
            dp[j] += l[i];
        }
        
    }
    cout << dp[x]*5ll;

    return 0;
}
