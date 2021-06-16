#include <bits/stdc++.h>
using namespace std;
struct water {
  int num, time;
} p[1010];
bool cmp(water a, water b) {
  if (a.time != b.time)
    return a.time < b.time;
  return a.num < b.num;
}
double n, sum = 0;
int main() {

  cin>>n;
  for (int i = 1; i <= n; i++) {
    cin>>p[i].time;
    p[i].num = i;
  }
  sort(p + 1, p + (int)n + 1, cmp);
  for (int i = 1; i <= n; i++) {
    cout<<p[i].num<<" ";
    sum += i * p[(int)n - i].time;
  }
  double aaa = 1.0 * sum / n;
  printf("\n%.2lf\n", aaa);
  return 0;
}
