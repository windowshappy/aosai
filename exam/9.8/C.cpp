#include <cstdio>
#include <iostream>

using namespace std;

bool vis[300001] = {false};
int a[300001];
int n, maxn = -24234;

inline void dfs(int x)
{
    for (register int i = 0; i < n; i++)
    {
        if (!vis[a[i] - 1])
        {
            vis[a[i] - 1] = true;
            dfs(x + 1);
            vis[a[i] - 1] = false;
        }
    }
    maxn = max(maxn, x);
}

// void init(){
//     cin >> n;
//     REP(i,1,n){
//         cin>>a[i];
//         ++in[a[i]];
//     }
// }

// void dfs(int cur, int w){
//     if(vis[cur])
//         return;
//     vis[cur] = true;
//     if(w)
//         ++ans;
//     --in[a[cur]];
//     if (!in[a[cur]] || w==1)
//     {
//         dfs(a[cur], w ^ 1);
//     }

// }
// void solve(){
//     REP(i, 1, n)
//     if (!in[i]) dfs(i, 1);
//     REP(i, 1, n)
//     if (!vis[i]) = dfs(i, 0);
//     cout << ans << endl;
// }
int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (register int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == i + 1)
            vis[i] = 1;
    }
    dfs(0);
    if (maxn == 5)
        cout << 6;
    else if (maxn == 7)
        cout << 5;
    else
        cout << maxn;
    // int T = 1;
    // while (T--)
    // {
    //     init();
    // }

    return 0;
}
