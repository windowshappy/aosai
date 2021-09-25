#include<bits/stdc++.h>

using namespace std;

int a[3000],ans = 0;

int main()
{
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if(!(a[i]>a[i-1])){
            int t = (a[i - 1] - a[i])/d+1;
            a[i] += d * t;
            ans += t;
        }
    }
    cout << ans;

    return 0;
}
