#include <bits/stdc++.h>

using namespace std;

int lcm(int a, int b)
{
    for (int i = max(a, b);; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 3; i <= n+1; i++)
    {
        if(i%3 == 0)
            ans += i;
        else
        ans += lcm(2, i);
    }
    cout << ans;
    return 0;
}
