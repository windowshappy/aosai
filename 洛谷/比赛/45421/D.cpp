#include <bits/stdc++.h>

using namespace std;

int f[1000002];

int main() {
  long long n,m,ans = 1;
  //long long ans = 1,t;
  cin>>n>>m;
  f[1] = 1;
  f[2] = 1;
  if(m==1){
    cout<<1;
    return 0;
  }
  for(int i=0;i<=n;i++){
    if(i-m<0)f[i] = 1;
    else{
      f[i] = (f[i-1] + f[i-m])%1000000007;
      ans = f[i];
    }

  }
  cout<<ans;
  // t = n-m;
  // if(t<0) ans = 1;
  // else if(t==0) ans = 2;
  // else{
  //   if(n>40) ans = 20;
  //   else
  //   ans += (t-1)+2+n/m-1;
  // }
  // if(m==1) cout<<1;
  // else
  // cout<<ans*(n/m)%1000000007;
  return 0;
}
