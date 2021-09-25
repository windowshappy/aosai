#include <bits/stdc++.h>

using namespace std;

#define MAXN 0x3f3f3f3f

struct rock
{
    int t, x, y;
};
int mp[311][311];
int mx[] = {0, 0, -1, 1}, my[] = {-1, 1, 0, 0};
bool vis[311][311];
int BFS(rock a)
{
    queue<rock> Q;
    Q.push(a);
    vis[a.x][a.y] = true;
    while (!Q.empty())
    {
        rock u = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {

            rock c;
            c.x = u.x + mx[i];
            c.y = u.y + my[i];
            c.t = u.t + 1;
            if (c.x <= -1 || c.y <= -1)
                continue;
            if (mp[c.x][c.y] == MAXN)
                return c.t;
            if (c.t < mp[c.x][c.y] && !vis[c.x][c.y])
            {
                Q.push(c);
                vis[c.x][c.y] = true;
            }
        }
    }
    return -1;
}

int main()
{
    int m;
    cin >> m;
    memset(mp, 0x3f, sizeof(mp));
    for (int i = 1,x,y,t; i <= m; i++)
    {
        cin >> x >> y >> t;
        mp[x][y] = min(mp[x][y], t);
        for (int j = 0; j < 4; j++)
        {
            if (x + mx[j] <= -1 || y + my[j] <= -1)
                continue;
            mp[x + mx[j]][y + my[j]] = min(mp[x + mx[j]][y + my[j]], t);
        }
    }
    int t = BFS((rock){0, 0, 0});
    cout << t;
    return 0;
}