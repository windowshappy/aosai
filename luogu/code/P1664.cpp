#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, t, time = 0, ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t)
        {
            time++;
        }
        else
        {
            time = 0;
        }
        switch (time)
        {
            case 1:
                ans++;
                break;
            case 3:
                ans += 2;
                break;
            case 7:
                ans += 3;
                break;
            case 30:
                ans += 4;
                break;
            case 120:
                ans += 5;
                break;
            case 365:
                ans += 6;
                break;
            default:
                break;
        }
    }
    cout << ans;
    return 0;
}
