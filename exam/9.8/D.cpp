#include <bits/stdc++.h>

using namespace std;
#define maxn 40005
int n, m, ans = 1;
vector<int> a[maxn];
vector<bool> vis[maxn];
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};


/*
题目描述
给定一个n*m的矩阵，每个位置是一个整数

在四连通意义下，找一条最长的路径，使得路径上数字形成一个等比数列，且公比为整数

输出这个路径长度，如果路径长度为无穷则输出-1−1

注意：这里的路径不一定是简单路径

输入格式
第一行两个数n,m表示矩阵大小

下面n行，每行m个数(用空格分开),表示这个矩阵

输出格式
一个数字表示答案

输入输出样例
输入 #1   输出 #1
2 2       4
1 2
8 4

输入 #2   输出 #2
2 2       -1
1 1
1 1

*/

struct node
{
    int x, y, k, step;

    node(int _x, int _y, int _k, int _step)
    {
        x = _x;
        y = _y;
        k = _k;
        step = _step;
    }
};

bool bfs(int sx, int sy)
{
    queue<node> q;
    if (a[sx][sy] == 0)
        return false;

    for (int i = 0; i < 4; i++)
    {
        int cx = sx + dx[i];
        int cy = sy + dy[i];
        if (cx < 0 || cy < 0 || cx > n - 1 || cy > m - 1)
            continue;
        if (a[cx][cy] == a[sx][sy])
            return true;
        else if (a[cx][cy] != 0 && a[cx][cy] % a[sx][sy] == 0)
            q.push(node(cx, cy, a[cx][cy] / a[sx][sy], 2));
    }

    while (!q.empty())
    {
        node t = q.front();
        q.pop();
        if (vis[t.x][t.y] && t.step < ans)
            continue;
        vis[t.x][t.y] = true;

        for (int i = 0; i < 4; i++)
        {
            int cx = t.x + dx[i];
            int cy = t.y + dy[i];
            if (cx < 0 || cy < 0 || cx > n - 1 || cy > m - 1 || a[cx][cy] == 0)
                continue;
            if (a[t.x][t.y]*t.k == a[cx][cy])
                q.push(node(cx, cy, t.k, t.step + 1));
        }
        ans = max(t.step, ans);
    }

    return false;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i <= n + 1; i++)
        a[i].resize(m + 2), vis[i].resize(m + 2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            vis[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j]){
                if(bfs(i,j)){
                    cout << -1;
                    return 0;
                }
            }
        }
        
    }

    cout << ans;

    return 0;
}