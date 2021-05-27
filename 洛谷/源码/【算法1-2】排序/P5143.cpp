#include <bits/stdc++.h>

using namespace std;

struct hill {
  int x,y,z;
} h[50001];

bool cmp(hill a, hill b){
  return a.z<b.z;
}

int main() {
  int n;
  double ans = 0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>h[i].x>>h[i].y>>h[i].z;
  }
  sort(h, h+n,cmp);
  for(int i=0;i<n-1;i++){
    ans += sqrt((h[i].x-h[i+1].x)*(h[i].x-h[i+1].x)+(h[i].y-h[i+1].y)*(h[i].y-h[i+1].y)+(h[i].z-h[i+1].z)*(h[i].z-h[i+1].z));

  }
  printf("%.3lf\n", ans);
  return 0;
}
