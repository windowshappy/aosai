#include <bits/stdc++.h>

using namespace std;

bool p[1030][1030]; int n;

void c(int x,int y, int n) {
  int t = n-1;
  if (n == 0) {
    p[x][y] = 1;
  }
  else{
    c(x + (1 << t), y, n - 1);
    c(x, y + (1 << t), n - 1);
    c(x + (1 << t), y + (1 << t), n - 1);

  }
}

int main() {
  cin>>n;
  c(0,0,n);
  for (int i = 0; i < 1<<n; i++) {
    for (int j = 0; j < 1<<n; j++) {
      cout<<p[i][j];
      if(j==(1<<n)-1){
        cout<<endl;
      }
      else{
        cout<<" ";
      }
    }

  }
  return 0;
}
