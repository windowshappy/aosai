#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5050;

int a[MAXN][MAXN], len = 1;
void add(int j) {
  for(int i=1;i<=len;i++){
    a[j][i]+=a[j-1][i]+a[j-2][i];
    a[j][i+1] = a[j][i]/10;
    a[j][i]%=10;
  }
  if(a[j][len+1])
    len++;
}


int main() {
    int n;
    cin>>n;
    a[1][1] = 1;
    a[2][1] = 2;
    for (int i = 3; i <= n; i ++) {
        add(i);
    }
    for(int i=len; i>=1; i--){
      cout<<a[n][i];
    }
    return 0;
}
