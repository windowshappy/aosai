#include <bits/stdc++.h>

using namespace std;

int main() {
  int q,n, t;int nnn = 0;
  stack<int> pushed;
  cin>>q;
  while (q--) {
    nnn = 0;
    while(!pushed.empty()) pushed.pop();
    cin>>n;
    vector<int> n1;
    for(int i=0;i<n;i++){
      cin>>t;
      pushed.push(t);
    }
    for (int i = 0; i < n; i++) {
      cin>>t;
      if(pushed.top() == t){
        nnn++;
        pushed.pop();
      }
      
    }
    if(nnn==n){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }

  }
  return 0;
}
