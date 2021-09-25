#include<bits/stdc++.h>

using namespace std;
int x[50],k,n,ans = 0;

bool prime(int x)
{
     if(x<2) return 0;
     if(x==2) return 1;
     for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
     return 1;
}

void dfs(int t, int a, int sum){
    if (t >= k){
        if(prime(sum)){
            ans++;
        }
        return;
    }
    for (int i = a; i < n; i++)
    {
        dfs(t+1, i+1,sum+x[i]);
    }
    
}

int main()
{
    
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    dfs(0, 0, 0);

    cout << ans;

    return 0;
}
