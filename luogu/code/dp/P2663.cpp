#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, m;
    int w[101];
    cin >> t >> m;
    int dp[1000];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }

    for (int i = 0; i < m; i++)
    {
        dp[j] = max(dp[j-1], dp[j-1] + w[i]);
    }
    cout << dp[t];

    return 0;
}
