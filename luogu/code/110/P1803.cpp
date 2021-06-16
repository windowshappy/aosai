#include <bits/stdc++.h>

using namespace std;

struct test {
  int s,e;
} a[1000010];

bool cmp(test a, test b){
  return a.e<=b.e;
}

int main() {
  int n;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>a[i].s>>a[i].e;
  }
  sort(a, a+n, cmp);
  int finish = 0, ans=0;
  for(int i=0;i<n;i++){
    if(a[i].s>=finish){
      ans++;
      finish = a[i].e;
    }
  }
  cout<<ans;
  return 0;
}
