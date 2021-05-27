#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,s,b,a = 1,b1 = 0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s>>b;
    a*=s;
    b1+=b;
  }
  cout<<abs(a-b1);
  return 0;
}
