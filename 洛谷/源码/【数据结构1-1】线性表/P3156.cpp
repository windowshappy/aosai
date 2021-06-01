#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> stu;
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    int t;
    cin>>t;
    stu.push_back(t);
  }
  for(int i=0;i<m;i++){
    int t;
    cin>>t;
    cout<<stu[t-1]<<endl;
  }
  return 0;
}
