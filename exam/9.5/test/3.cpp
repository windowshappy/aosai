#include <bits/stdc++.h>

using namespace std;

int n;
int d[50][2];
int ans;

void dfs(int n, int sum){
    if(n==1){
        ans = max(sum, ans);
        return;
    }
    for (int i = 1; i < n; i++)
    {
        int a = d[i - 1][0], b = d[i - 1][1];
        int x = d[i][0], y = d[i][1];
        d[i - 1][0] = a + x;
        d[i - 1][1] = b + y;
        for (int j = i; j < n-1; j++)
        {
            d[j][0] = d[j + 1][0], d[j][1] = d[j + 1][1];
        }
        int s = a + x + abs(b - y);
        dfs(n - 1, sum + s);
        for (int j = n-1; j > i; --j)
        {
            d[j][0] = d[j - 1][0], d[j][1] = d[j - 1][1];
        }
        d[i - 1][0] = a, d[i - 1][1] = b;
        d[i][0] = x, d[i][1] = y;
    }
    
}
int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i][1];
    }
    ans = 0;
    dfs(n, 0);
    cout << ans << endl;

    return 0;
}