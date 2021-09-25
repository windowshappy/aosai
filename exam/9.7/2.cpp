#include <bits/stdc++.h>

using namespace std;
const int N = 5010;
const int M = 20010;
const int inf = 1073742823;
int e, bg[N], nx[M], to[M], wt[M];
inline void link(int u, int v, int w)
{
    to[++e] = v;
    nx[e] = bg[u];
    wt[e] = w;
    bg[u] = e;
}

int n, m, u, v, w;
int f[N], h[N << 1];

void update(int x, int y)
{
    x += n - 1;
    for (h[x] = y; x; x >>= 1)
    {
        h[x >> 1] = f[h[x]] < f[h[x ^ 1]] ? h[x] : h[x ^ 1];
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i != m; i++)
    {
        cin >> u >> v >> w;
        link(u, v, w);
    }
    int nn = n << 1;

    return 0;
}
