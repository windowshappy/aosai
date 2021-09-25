#include<bits/stdc++.h>

#define isprime(a) prime(a)

using namespace std;

long long dp[1001];

bool prime(int);

int main()
{
    int n;
    cin >> n;
    dp[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        if(isprime(i)){
            for (int j = i; j <= n;j++){
                dp[j] += dp[j - i];
            }
        }
    }
    cout << dp[n];
    return 0;
}

bool prime(int x)
{
     if(x<2) return 0;
     if(x==2) return 1;
     for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
     return 1;
}