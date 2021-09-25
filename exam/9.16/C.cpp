#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, x, y, ans = 0;
    cin >> a >> b >> c >> x >> y;
    if (x < y)
    {
        ans = ceil(1.0 * (a + b) / c) * x;
    }
    else if (x == y)
    {
        ans = ceil(1.0 * (a + b) / c) * x;
    }
    else
    {
        b -= (c - floor(1.0 * a / c));
        ans = (int)ceil(1.0 * a / c) * x + (int)ceil(1.0 * b / c) * y;
    }
    cout << ans;
    return 0;
}
