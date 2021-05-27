#include <bits/stdc++.h>

using namespace std;

int main() {

  string a,b,c,d;
  char m[200] = {'-'};
  getline(cin,a);
  getline(cin,b);
  getline(cin,c);
  d=c;
  for(int i=0;i<a.size();i++){
    if(m[a[i]-'A']!='-'&&m[a[i]-'A']!=b[i]){
      cout<<m[a[i]-'A']<<" "<<b[i];
      cout<<"Failed1";
      return 0;
    }
    m[a[i]-'A'] = b[i];
  }
  for(int i=0;i<c.size();i++){
    if(m[c[i]-'A']=='-'){
      cout<<"Failed2";
      return 0;
    }
    else{
      d[i] = m[c[i]-'A'];
    }
  }
  cout<<d;
  return 0;
}
