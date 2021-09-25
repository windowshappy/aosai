#include <bits/stdc++.h>

using namespace std;
int n, m, hx, hy;

struct horse
{
    int x, y;
};

queue<horse> Q;

int ans[500][500];
int walk[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

int main()
{
    memset(ans, -1, sizeof(ans));
    cin >> n >> m >> hx >> hy;
    horse tmp = {hx, hy};
    Q.push(tmp);
    ans[hx][hy] = 0;
    while (!Q.empty())
    {
        horse u = Q.front();
        int ux = u.x, uy = u.y;
        Q.pop();
        for (int k = 0; k < 8; k++)
        {
            int x = ux + walk[k][0], y = uy + walk[k][1];
            int d = ans[ux][uy];
            if (x < 1 || x > n || y < 1 || y > m || ans[x][y] != -1)
                continue;
            ans[x][y] = d + 1;
            horse tmp = {x, y};
            Q.push(tmp);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%-5d", ans[i][j]);
        }
        cout << endl;
    }

    return 0;
}
