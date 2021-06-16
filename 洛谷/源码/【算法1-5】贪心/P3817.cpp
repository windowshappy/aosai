#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int n,a[100050] = {},x;long long ans = 0;
  cin>>n>>x;
  for(register int i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]+a[i-1]>x) {
      int t = a[i]+a[i-1] -x;
      a[i] -= t;
      ans+=t;
    }
  }
  cout<<ans;
  return 0;
}
