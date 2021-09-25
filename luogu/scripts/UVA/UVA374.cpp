#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long b, p, m;
    while (cin >> b >> p >> m)
    {
        long long ans = 1;
        while (p)
        {
            if (p & 1)
                ans = (ans * b) % m;
            p >>= 1;
            b = (b * b) % m;
        }
        printf("%lld\n", ans % m);
    }
    return 0;
}
