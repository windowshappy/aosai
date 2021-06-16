#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[10010], n,m;
  cin>>n>>m;
  for (size_t i = 0; i < n; i++) {
    cin>>a[i];
  }
  for(;m--;){
    next_permutation(a, a+n);
  }
  for (size_t i = 0; i < n; i++) {
    cout<<a[i]<<" ";
  }
  return 0;
}
