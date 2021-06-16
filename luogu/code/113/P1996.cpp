#include <bits/stdc++.h>

using namespace std;

int main() {
  queue<int> q;
  int n,m,i;
  cin>>n>>m;
  for(i=1;i<=n;i++) q.push(i);
  while(q.size() >= 1) {
    for(i=1;i<m;i++) {
      q.push(q.front());
      q.pop();
    }
    printf("%d ",q.front());
    q.pop();
  }
  return 0;
}
