#include <bits/stdc++.h>

using namespace std;
int n, x[8] = {0, -1, -1, -1, 0, 1, 1, 1}, y[8] = {1, 1, 0, -1, -1, -1, 0, 1};
char a[111][111];
int num_Y[111];
bool temp[111][111];
bool dfs(int tx, int ty, char w, int p)
{
    
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'y')
            {
                num_Y[i]++;
            }
        }
    }

    return 0;
}
