#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a,b = 0;int c = 0;
  while(cin>>a){
    b+=a;
    c++;
  }
  for(int i=1;i<c;i++){
    b*=2;
  }
  cout<<b;
}
