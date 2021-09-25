#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a, maxn=-4324;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a>maxn)
            maxn = a;
    }
    cout << maxn;
    return 0;
}
