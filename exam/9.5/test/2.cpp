#include <bits/stdc++.h>

using namespace std;
long long d[1000000];
int main()
{
    // ios::sync_with_stdio(0);

    long long n, ans;
    int k, len;

    cin >> n >> k;
    d[0] = 0;
    len = 1;
    ans = 0;
    for (register long long i = 0; i < n; i++)
    {
        ++d[0];
        for (register int j = 0; j < len - 1; j++)
        {
            if (d[j] == k)
            {
                d[j] = 0;
                d[j + 1]++;
                ++ans;
            }
        }
        if (d[len - 1] == k)
        {
            d[len - 1] = 0;
            d[len] = 1;
            ++len;
            ++ans;
        }
    }

    cout << ans;

    return 0;
}