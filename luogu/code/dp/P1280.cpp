#include<bits/stdc++.h>

using namespace std;

vector<int> a[10002];
int dp[10002];
int main()
{
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int t, t1;
        cin >> t >> t1;
        a[t].push_back(t1);
    }
    for (int i = n; i >=1; i--)
    {
        if(a[i].empty())
            dp[i] = dp[i + 1] + 1;
        else
        for (int j = 0; j < a[i].size(); j++)
        {
            dp[i] = max(dp[i], dp[i+a[i][j]]);
        }
        
    }
    cout << dp[1];

    return 0;
}
