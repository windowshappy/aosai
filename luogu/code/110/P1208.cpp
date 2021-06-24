#include <bits/stdc++.h>

using namespace std;

struct milk
{
    int p, a;
} a[2000000+5];

bool cmp(milk a, milk b){
    return a.p < b.p;
}

int main() {
    int n, m, ans = 0, t = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i].p >> a[i].a;
    }
    sort(a, a + n, cmp);
    for (int i = 0; t<n ; i++)
    {
        ans += a[i].p*a[i].a;
        t += a[i].a;
        if(t>n){
            ans -= a[i].p * (t - n);
            break;
        }
    }
    cout << ans;

    return 0;
}