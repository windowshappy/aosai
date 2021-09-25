#include <bits/stdc++.h>

using namespace std;

int d[100001];

int main()
{
    int n, minn = 2131231, ans = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(d[i+1]>d[i])
            ans += d[i + 1] - d[i];
    }
    cout << ans+d[0];

    return 0;
}
