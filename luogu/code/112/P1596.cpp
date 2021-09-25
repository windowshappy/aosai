#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
char lake[111][111];

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool vis[111][111];

inline void dfs(int x, int y)
{
    lake[x][y] = '.';
    for (int i = 0; i < 8; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (lake[xx][yy] == '.' || xx >= n || xx < 0 || yy >= m || yy < 0)
            continue;
        lake[xx][yy] = '.';
        dfs(xx, yy);
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> lake[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (lake[i][j] == 'W')
            {
                ans++;
                dfs(i, j);
            }
        }
    }
    
    cout << ans;
    return 0;
}
