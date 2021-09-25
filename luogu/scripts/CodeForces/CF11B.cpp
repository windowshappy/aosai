#include <bits/stdc++.h>

using namespace std;
int x, ans;
const int dm[] = {1, -1};
void dfs(int n, int temp)
{
    if (temp == x)
    {
        if (n != 0)
            n--;
        ans = min(ans, n);
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        int ttt = temp + n * dm[i];
        if (abs(ttt) > abs(x))
            continue;
        if (ttt < 0)
            continue;
        dfs(n + 1, ttt);
    }
}

int main()
{

    cin >> x;
    x = abs(x);
    for (int i = 1, t = 1; x && !ans; ++i, t += i)
        if (t == x || (t > x && !((t - x) % 2)))
            ans = i;
    cout << ans;
    return 0;
}
