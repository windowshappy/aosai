#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n,m;
  long long squ = 0,rec = 0;
  cin>>n>>m;
  for (long long a = 1; a <= min(m, n); a++)
    squ += (n-a+1) * (m-a+1);
  rec = n * (n+1) * m * (m+1) / 4 - squ;
  cout<<squ<<" "<<rec;
  return 0;
}
