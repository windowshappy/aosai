#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, ans= 1;
    cin >> n;
    for (register int i = 1; i <= n; i++)
    {
        ans *= i;
        while(ans%10 ==0){
            ans /= 10;
        }
        ans %= 100000000;
    }
    cout << ans%10;
    return 0;
}