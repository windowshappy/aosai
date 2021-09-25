#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int ground[111][111];
int vis[111][111];
int r, c;
int  ans = -3;

int dfs(int x, int y)
{
    if(vis[x][y])
        return vis[x][y];
    vis[x][y] = 1;

    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && yy >= 0 && xx < r && yy < c && ground[xx][yy] < ground[x][y])
        {
            dfs(xx, yy);
            vis[x][y] = max(vis[x][y], vis[xx][yy]+1);
        }
    }
    return vis[x][y];
}

int main()
{

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> ground[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans = max(ans,dfs(i, j));
        }
    }
    cout << ans;

    return 0;
}
