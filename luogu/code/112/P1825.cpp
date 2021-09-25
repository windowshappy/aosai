#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
int n, m, eX, eY, ans = 234234;
char maze[311][311];
bool vis[311][311];

struct node
{
    int x, y, step;

    node(int _x, int _y, int s)
    {
        x = _x;
        y = _y;
        step = s;
    }

    node()
    {
    }
};

node chuansong(char a, int x, int y)
{
    for (register int i = 0; i < n; i++)
    {
        for (register int j = 0; j < m; j++)
        {
            if (maze[i][j] = a && i != x && j != y)
            {
                return node(x, y, 0);
            }
        }
    }
}

inline void dfs(int x, int y, int time)
{
    if (time > ans)
        return;
    if (x == eX && y == eY)
    {
        ans = min(ans, time);
        return;
    }
    //cout << x << " " << y << endl;
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if (maze[xx][yy] >= 'A' && maze[xx][yy] <= 'Z')
        {
            node ttt = chuansong(maze[xx][yy], xx, yy);
            xx = ttt.x;
            yy = ttt.y;
        }
        if (xx > n || yy > m || xx < 0 || yy < 0 || maze[xx][yy] == '#' || vis[xx][yy])
            continue;
        vis[xx][yy] = 1;
        dfs(xx, yy, time + 1);
    }
}

void bfs(int x, int y)
{
    queue<node> Q;
    Q.push(node(x, y, 0));
    while (!Q.empty())
    {
        node c = Q.front();
        Q.pop();
        if (c.x == eX && c.y == eY)
        {
            cout << c.step;
            return;
        }
        if (maze[c.x][c.y] >= 'A' && maze[c.x][c.y] <= 'Z')
        {
            node ttt = chuansong(maze[c.x][c.y], c.x, c.y);
            c.x = ttt.x;
            c.y = ttt.y;
        }
        for (int i = 0; i < 4; i++)
        {
            int xx = c.x + dx[i];
            int yy = c.y + dy[i];
            if (xx > n || yy > m || xx < 0 || yy < 0 || maze[xx][yy] == '#' || vis[xx][yy])
                continue;
            vis[xx][yy] = 1;
            Q.push(node(xx, yy, c.step + 1));
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    int x, y;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == '@')
            {
                x = i;
                y = j;
            }
            if (maze[i][j] == '=')
            {
                eX = i;
                eY = j;
            }
        }
    }
    bfs(x, y);
    //cout << ans;
    return 0;
}