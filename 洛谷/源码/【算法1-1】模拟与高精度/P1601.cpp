#include <bits/stdc++.h>

using namespace std;

#ifndef MAXN
#define MAXN 600
#endif

struct Bigint {
  int len, a[MAXN];
  Bigint(int x = 0) {
    memset(a, 0, sizeof(a));
    for (len = 0; x; len++)
      a[len] = x % 10, x /= 10;
  }

  int &operator[](int i) { return a[i]; }
  void flatten(int L) {
    len = L;
    for (int i = 0; i <= len; i++)
      a[i + 1] += a[i] / 10, a[i] %= 10;

    for (; !a[len];)
      len--;

  }
  void print() {
    for (int i = max(len, 0); i >= 0; i--)
      printf("%d", a[i]);
    // for (int i = 0; i <=max(len, 0); i++)
    //   printf("%d", a[i]);
  }
};
Bigint operator+(Bigint &a, Bigint &b) {
  Bigint c;
  int len = max(a.len, b.len);

  for (int i = 0; i <= len; i++)
    c[i] += a[i] + b[i];

  c.flatten(len + 1);
  return c;
}

Bigint operator*(Bigint &a, int b) {
  Bigint c;
  cout<<b<<endl;
  int len = a.len;
  for (int i = 0; i < len; i++){
    c[i] = a[i] * b;
  }

  c.flatten(len + 11);

  return c;
}


// int main() {
//   Bigint ans(101199), fac(2);
//   // 分别用 0 和 1 初始化 ans 与 fac，
//   // 如果要将常数赋值给大整数，可以使用ans=Bigint(233) 的办法
//   // int m;
//   // cin >> m;
//   // int i = 1;
//   //
//   // for (i=1; i <= m; i++) {
//   //
//   //   fac = fac * i; // 模拟题意
//   //
//   //   ans = ans + fac;
//   //   cout<<i<<" ";
//   //   ans.print();
//   // }
//   // ans.print(); // 输出答案
//   ans=ans*4;
//   ans.print();
//   return 0;
// }

int main() {
  Bigint a(0), b(0), c(0);
  string a1,b1;
  cin>>a1>>b1;
  
  for (int i=a1.length()-1,j=0;i>=0;i--,j++)
	   a[i]=a1[i]-'0';
	for (int i=b1.length()-1,j=0;i>=0;i--,j++)
	   b[i]=b1[i]-'0';
  a.flatten(a1.length()+1);
  b.flatten(b1.length()+1);
  // a.print();cout<<endl;
  // b.print();
  c = (a+b);
  c.print();
  return 0;
}
