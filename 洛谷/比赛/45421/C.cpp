#include <bits/stdc++.h>

using namespace std;
int s[200];
int main() {
  string a,b;int n; long long c = 1;
  cin>>a>>n;
  for(int i=0;i<a.size();i++){
    s[(int)a[i]] ++;
  }
  for (int i = 0; i < n; i++) {
    cin>>b;
    for(int j=0;j<b.size();j++){
      if(s[(int)b[j]]){
        for(int x = 0;x<s[(int)b[j]];x++){
          c*=b.size();
          c%=1000000007;
        }

      }
    }

  }

  cout<<c;
  return 0;
}
//
// int main() {
//   string a,b[1000];int n; long long c = 1;
//   cin>>a>>n;
//   for (int i = 0; i < n; i++) {
//     cin>>b;
//   }
//   for (int i = 0; i < n; i++) {
//     c*=b.size();
//   }
//   cout<<c;
//   return 0;
// }
