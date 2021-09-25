#include <bits/stdc++.h>

using namespace std;

int f[1000001];

int main()
{
    int n;
    cin >> n;
    f[1] = 1;
    f[2] = 2;
    f[3] = 5;
    for (int i = 4; i <= n; i++)
    {
        f[i] = f[i - 1] * 2 + f[i - 3];
        f[i] %= 10000;
    }
    cout << f[n];
    return 0;
}
