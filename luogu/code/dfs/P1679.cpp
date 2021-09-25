#include <bits/stdc++.h>

using namespace std;

int m, ans = 0x3f3f3f3f;

void dfs(int tot, int num, int lastnum) {
    if (num > ans)
        return;
    if (tot > m)
        return;
    if (tot == m) {
        ans = min(ans, num);
        return;
    }
    int i = lastnum;
    for (; i * i * i * i <= m - tot;)
        i++;
    for (; i >= lastnum; i--) {
        dfs(tot + i * i * i * i, num + 1, i);
    }
}

int main() {
    cin >> m;
    dfs(0, 0, 1);
    cout << ans;
    return 0;
}
