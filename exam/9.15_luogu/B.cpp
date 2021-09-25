#include <bits/stdc++.h>

using namespace std;
char a[511][511];
int n, m, ans = 45353535;
const int dx[] = {-1, 0};
const int dy[] = {0, 1};

void Update()
{
    for (register int i = 0; i < n; i++)
    {
        for (register int j = 0; j < m; j++)
        {
            if (a[i][j] == '_')
                a[i][j] = '^';

            if (a[i][j] == '^')
                a[i][j] = '_';
        }
    }
}
int vis[511][511];
inline int dfs(int x, int y, int num)
{
    if (x == 0 && y == m - 1)
    {
        vis[x][y] = min(vis[x][y], num);
        return vis[x][y];
    }
    if (vis[x][y] == num)
        return vis[x][y];
    vis[x][y] = min(vis[x][y], num);

    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && yy >= 0 && xx < n && yy < m && a[xx][yy] != 'X')
        {
            vis[xx][yy] = min(dfs(xx, yy, num + 1), vis[xx][yy]);
        }
    }
}
int main()
{
    memset(vis, 0x3f, sizeof(vis));
    cin >> n >> m;
    for (register int i = 0; i < n; i++)
    {
        for (register int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    if(n==1){
        int ans = 1;
        for (int i = m-1; i >0; i--)
        {
            ans++;
            Update();
            if(a[0][i] == '^')
                ans++;
        }
        cout << ans;
    }
    else{
        dfs(n - 1, 0, 1);
    cout << vis[0][m - 1];
    }
    
    return 0;
}
