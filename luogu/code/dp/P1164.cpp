#include<bits/stdc++.h>

using namespace std;

int a[111];
int dp[1111];
int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = m; j >= a[i]; j--)
        {
            dp[j] += dp[j - a[i]];
        }
        
    }
    cout << dp[m];

    return 0;
}
