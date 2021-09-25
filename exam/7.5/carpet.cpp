#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    freopen("carpet.in", "r", stdin);
    freopen("carpet.out", "w", stdout);
    int n, a[10009], b[10009], g[10009], k[10009], x, y, t = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    cin >> x >> y;

    for (int i = 1; i <= n; i++)
    {
        if (x >= a[i] && y >= b[i] && x <= a[i] + g[i] && y <= b[i] + k[i])
        {
            t = i;
        }
    }
    cout << t;
    fclose(stdin);
    fclose(stdout);
    return 0;
}