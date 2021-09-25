#include <bits/stdc++.h>

using namespace std;
int dp[500][500];
int main()
{
    //f[j]=max(f[j],f[j-w[i]]+v[i])
    int n, mt, mz;
    int t[101], z[101], k[101];
    cin >> mt >> mz >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> z[i] >> k[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = mt; j >= t[i]; j--)
        {
            for (int x = mz; x >= z[i]; x--)
            {
                dp[j][x] = max(dp[j][x], dp[j - t[i]][x - z[i]] + k[i]);
            }
            
            
        }
    }
    cout << dp[mt][mz];

    return 0;
}
