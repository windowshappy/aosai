#include <bits/stdc++.h>

using namespace std;

int main() {
  stack <char> b;
  string a;
  getline(cin, a);
  for(int i=0;i<a.size();i++){
    if(a[i]=='@')break;
    if(a[i]=='('||a[i]==')'){
      if(b.empty()){
        b.push(a[i]);
        continue;
      }
      if(a[i] == ')'&&b.top()=='(')
      b.pop();
      else b.push(a[i]);
    }

  }
  if(b.empty()) cout<<"YES";
  else cout<<"NO";
  return 0;
}
