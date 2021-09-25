#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10005;

int k[MAXN], m[MAXN], dp[MAXN];
int main() {
    int v, n, c;
    cin >> v >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> k[i] >> m[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = c; j >= m[i]; j--) {
            dp[j] = max(dp[j], dp[j - m[i]] + k[i]);
        }
    }

    if (dp[c] < v) {
        cout << "Impossible";
        return 0;
    }
    int i = c;
    while(dp[i]>=v)
        i--;
    cout << c - i - 1;
    return 0;
}
