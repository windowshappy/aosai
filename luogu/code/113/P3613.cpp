#include <bits/stdc++.h>

using namespace std;

int main() {

  int n,q,i,j,k;
  cin>>n>>q;
  vector< vector<int> > locker(n+1);
  while (q--) {
    int o;
    cin>>o;
    if(o==1){
      cin>>i>>j>>k;
      if(locker[i].size()<(j+1)){
        locker[i].resize(j+1);
      }
      locker[i][j] = k;
    }else{
      cin>>i>>j;
      cout<<locker[i][j]<<endl;
    }
  }
  return 0;
}
