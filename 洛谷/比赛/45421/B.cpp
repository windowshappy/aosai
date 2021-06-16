#include <bits/stdc++.h>

using namespace std;

int dp[1024], a[1024], n, ans;

int main(){
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }
  dp[0] = 1;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(a[j]<a[i]) dp[i] = max(dp[i], dp[j]);

    }
    dp[i]++;ans = max(dp[i], ans);
  }
  cout<<ans;
}
