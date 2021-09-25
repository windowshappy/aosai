#include <bits/stdc++.h>

using namespace std;

int t, n, m, price;
int p[111][111], dp[10005];

int main()
{
    cin >> t >> n >> m;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    price = m;
    for (int i = 0; i < t - 1; i++)
    {
        memset(dp, -34332, sizeof(dp));
        dp[price] = price;
        for (int j = 0; j < n; j++)
        {
            for (int k = price; k >= p[i][j]; k--)
            {
                dp[k - p[i][j]] = max(dp[k - p[i][j]], dp[k] + p[i + 1][j] - p[i][j]);
            }
        }
        int ppp = 0;

        for (int j = 0; j <= price; j++)
        {
            ppp = max(ppp, dp[j]);
        }
        price = ppp;
    }
    cout << price;
    return 0;
}
