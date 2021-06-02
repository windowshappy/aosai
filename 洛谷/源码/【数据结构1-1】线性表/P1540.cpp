#include <bits/stdc++.h>

using namespace std;

int main() {
  int m,n,t, t1 = 0;
  bool h[1111] = {0};
  queue<int> w;
  cin>>m>>n;
  int i=1;
  for(;i<=n;i++){
    cin>>t;
    if(h[t]) continue;
    if(w.size()>=m){

      h[w.front()] = 0;
      w.pop();
    }
    w.push(t);
    h[t] = true;
    t1++;
  }
  cout<<t1;
  return 0;
}
