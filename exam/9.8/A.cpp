#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c, a, n, k, ans = 0;
    scanf("%lf%lf%lf", &a, &n, &k);
    c = a / min(n, 25.0);
    ans += c;
    if (k == 1)
    {
        ans += a * 0.05;
    }
    if (k == 2)
    {
        ans += a * 0.03;
    }
    if (k == 3)
    {
        ans += a * 0.01;
    }
    printf("%.2lf", ans);
    return 0;
}
