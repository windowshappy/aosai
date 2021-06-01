#include <bits/stdc++.h>

using namespace std;

#ifndef MAXN
#define MAXN 600
#endif

void add() {
  int a[MAXN],b[MAXN],c[MAXN];
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(c, 0, sizeof(c));
  string A,B;
  cin>>A>>B;
  int len = max(A.length(), B.length());
  for(int i=A.length()-1, j=1;i>=0;i--,j++){
    a[j] = A[i]-'0';
  }
  for(int i=B.length()-1, j=1;i>=0;i--,j++){
    b[j] = B[i]-'0';
  }
  for(int i=1;i<=len;i++){
    c[i]+=a[i]+b[i];
    c[i+1] = c[i]/10;
    c[i]%=10;
  }
  if(c[len+1])
    len++;
  for(int i=len; i>=1; i--){
    cout<<c[i];
  }
}

void multiplication() {
  int a[MAXN],b[MAXN],c[MAXN];
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(c, 0, sizeof(c));
  string A,B;
  cin>>A>>B;
  int lena = A.length();
  int lenb = B.length();
  for(int i=A.length()-1, j=0;i>=0;i--,j++){
    a[j] = A[i]-'0';
  }
  for(int i=B.length()-1, j=0;i>=0;i--,j++){
    b[j] = B[i]-'0';
  }

  // 计算贡献
  for (int i = 0; i < lena; i++)
    for (int j = 0; j < lenb; j++)
      c[i + j] += a[i] * b[j];
  // 乘积的位数不超过两数的位数之和
  int lenc = lena + lenb;
  for (int i = 0; i < lenc; i++) {
    c[i + 1] += c[i] / 10; // 处理进位
    c[i] %= 10;
  }
  // 去掉前导零
  for (; !c[lenc];)
    lenc--;
  for(int i=lenc; i>=0; i--){
    cout<<c[i];
  }
}

int main() {
  multiplication();
  return 0;
}
