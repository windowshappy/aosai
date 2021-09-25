#include <bits/stdc++.h>
using namespace std;

#define N 105
#define INF 1e9

int dis1[N][N], dis2[N][N];
int mp[N][N], n, m;

void fun1(int dis[N][N])
{
    static bool vis[N];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = mp[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            vis[j] = 0;
        for (int k = 1; k <= n; k++)
        {
            int now = 0;
            for (int j = 1; j <= n; j++)
            {
                if (!vis[j] && (!now || dis[i][now] > dis[i][j]))
                    now = j;
            }
            vis[now] = 1;
            for (int j = 1; j <= n; j++)
            {
                if (!vis[j] && dis[i][j] > dis[i][now] + mp[now][j])
                {
                    dis[i][j] = dis[i][now] + mp[now][j];
                }
            }
        }
    }
}

void fun2(int dis[N][N])
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = mp[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                mp[i][j] = 0;
            else
                mp[i][j] = INF;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v, m;
        cin >> u >> v >> m;
        mp[u][v] = m;
    }
    fun1(dis1);
    fun2(dis2);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dis1[i][j] != dis2[i][j])
                ans++;
        }
    }
    cout << ans;
    return 0;
}
