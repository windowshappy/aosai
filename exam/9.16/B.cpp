#include <bits/stdc++.h>

using namespace std;

#define MAXN 200001

int a, h[MAXN], uh[MAXN];
long long b[MAXN];
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n + k; i++)
    {
        cin >> a;
        if (i < k)
            h[i] = a;
        else
            uh[i - k] = a;
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        int maxn = -434, index = 0;
        for (int j = 0; j < k; j++)
        {
            if (maxn < h[j])
            {
                maxn = h[j];
                index = j;
            }
        }
        b[++t] = maxn;
        h[index] = uh[i];
    }
    for (int i = 2; i <= t; i++)
    {
        b[i] += b[i - 1];
        //cout << b[i] << " ";
    }
    int ans = 0;
    for (int i = 1; i <= t; i++)
    {
        ans += b[i];
    }
    cout << ans;
    return 0;
}
