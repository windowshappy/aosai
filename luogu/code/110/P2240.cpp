#include <bits/stdc++.h>

using namespace std;

struct coin {
  int m,v;
} a[111];

bool cmp(coin x, coin y){
  return x.v*y.m > y.v*x.m;
}

int main() {
  int n, i, c,t;
  float ans = 0;
  cin>>n>>t;
  c = t;
  for(i=0;i<n;i++){
    cin>>a[i].m>>a[i].v;
  }
  sort(a, a+n,cmp);
  for(i=0;i<n;i++){
    if(a[i].m>c) break;
    c -= a[i].m;
    ans+= a[i].v;
  }
  if(i<n) ans+= 1.0f * c/a[i].m*a[i].v;
  printf("%.2f", ans);
  return 0;
}
