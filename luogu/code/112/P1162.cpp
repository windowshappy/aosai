#include <bits/stdc++.h>

using namespace std;

#define MAXN 31

const int xPos[] = {0, 0, 0, 1, -1};
const int yPos[] = {0, -1, 1, 0, 0};

int n;
int a[MAXN][MAXN];
int color[MAXN][MAXN];
inline void dfs(int tx, int ty)
{
    if (tx > n + 1 || ty > n + 1 || tx < 0 || ty < 0 || color[tx][ty]!=0)
    {
        return;
    }
    color[tx][ty] = 1;
    for (int i = 1; i <= 4; i++)
    {
        int x = tx + xPos[i], y = ty + yPos[i];
        dfs(x, y);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == 0)
            {
                color[i][j] = 0;
            }
            else{
                color[i][j] = 2;
            }
        }
    }

    dfs(0, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (color[i][j] == 0)
                cout << "2 ";
            else
                cout << a[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
