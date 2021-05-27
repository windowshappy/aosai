#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int a[15], cnt = 0;long long x,y,z, A,B,C;
  cin>>A>>B>>C;
  for(int i=1;i<=9;i++){
    a[i] = i;
  }
  do {
    x = a[1]*100+a[2]*10+a[3];
    y = a[4]*100+a[5]*10+a[6];
    z = a[7]*100+a[8]*10+a[9];
    if(x*B == y*A && y*C == z*B)
    printf("%lld %lld %lld\n", x,y,z) ,cnt++;
  } while(next_permutation(a+1, a+10));
  if(!cnt) cout<<"No!!!";
  return 0;
}
