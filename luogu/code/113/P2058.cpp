#include <bits/stdc++.h>

using namespace std;

struct node {
  int time, contain;
};

void r1() {
  int n,t,k,x, ans = 0;
  int cnt[100005] = {0};
  cin>>n;
  deque<node> people;
  for(int i=0;i<n;i++){
    cin>>t>>k;
    for(int j=0;j<k;j++){
      cin>>x;
      people.push_back({t,x});
      if(cnt[x]++ == 0) ans++;
    }

    while (people.front().time <= t-86400) {
      if(--cnt[people.front().contain]==0) ans--;
      people.pop_front();
    }
    cout<<ans<<endl;
  }
}

int main() {
  // int n,t,k,x;
  // cin>>n;
  // vector<int> contains;
  // for(int i=0;i<n;i++){
  //   cin>>t>>k;
  //   for(int j=0;j<k;j++){
  //     cin>>x;
  //     contains.push_back(x);
  //   }
  //   sort(contains.begin(), contains.end());
  //   contains.erase(unique(contains.begin(), contains.end()), contains.end());
  //   cout<<contains.size()<<endl;
  // }

  r1();
  return 0;
}
