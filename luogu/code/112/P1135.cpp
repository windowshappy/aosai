#include <bits/stdc++.h>

using namespace std;

struct node
{
    int floor, d;
};
queue<node> Q;

int n, a, b, k[1111], vis[1111];
int main()
{
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        cin >> k[i];
    }
    
    Q.push((node){a, 0});
    vis[a] = 1;
    node now;
    while (!Q.empty())
    {
        now = Q.front();
        Q.pop();
        if (now.floor == b)
            break;
        for (int sign = -1; sign <= 1; sign += 2)
        {
            int dist = now.floor + k[now.floor] * sign;
            if (dist >= 1 && dist <= n && vis[dist] == 0)
            {
                Q.push((node){dist, now.d + 1});
                vis[dist] = 1;
            }
        }
    }
    if (now.floor == b)
        cout << now.d << endl;
    else
        cout << -1 << endl;
    return 0;
}
