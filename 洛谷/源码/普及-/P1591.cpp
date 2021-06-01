#include <bits/stdc++.h>

using namespace std;

#ifndef MAXN
#define MAXN 600
#endif

int a[MAXN],b[MAXN],c[MAXN];

int add(string A,string B) {

  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(c, 0, sizeof(c));

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
  return len;
}

int  multiplication(string A, string B) {
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(c, 0, sizeof(c));

  int lena = A.length();
  int lenb = B.length();
  for(int i=A.length()-1, j=0;i>=0;i--,j++){
    a[j] = A[i]-'0';
  }
  for(int i=B.length()-1, j=0;i>=0;i--,j++){
    b[j] = B[i]-'0';
  }


  for (int i = 0; i < lena; i++)
    for (int j = 0; j < lenb; j++)
      c[i + j] += a[i] * b[j];
  int lenc = lena + lenb;
  for (int i = 0; i < lenc; i++) {
    c[i + 1] += c[i] / 10;
    c[i] %= 10;
  }

  for (; !c[lenc];)
    lenc--;
  return lenc;
}

int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++){

  }
  return 0;
}
