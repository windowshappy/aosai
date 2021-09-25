#include <cstdio>
#include <iostream>

using namespace std;
int d[111][111];

int main()
{
    freopen("mine.in", "r", stdin);
    freopen("mine.out", "w", stdout);
    int n, m;
    char t;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> t;
            if (t == '*')
            {
                d[i][j] = -1111;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (d[i][j] == 0)
            {
                if (d[i][j - 1] == -1111)
                {
                    d[i][j]++;
                }
                if (d[i - 1][j - 1] == -1111)
                {
                    d[i][j]++;
                }
                if (d[i - 1][j] == -1111)
                {
                    d[i][j]++;
                }
                if (d[i][j + 1] == -1111)
                {
                    d[i][j]++;
                }
                if (d[i + 1][j + 1] == -1111)
                {
                    d[i][j]++;
                }
                if (d[i + 1][j] == -1111)
                {
                    d[i][j]++;
                }
                if (d[i + 1][j - 1] == -1111)
                {
                    d[i][j]++;
                }
                if (d[i - 1][j + 1] == -1111)
                {
                    d[i][j]++;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(d[i][j]==-1111){
                cout << "*";
            }
            else{
                cout << d[i][j];
            }
        }
        cout << endl;
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
