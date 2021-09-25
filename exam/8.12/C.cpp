#include <bits/stdc++.h>

using namespace std;


void t(){
    double h, s1, v, l, k;
    int n;
    cin >> h >> s1 >> v >> l >> k >> n;
    double maxt = sqrt(h / 5);
    double mint = sqrt((h - k) / 5);
    int b = s1 - mint * v + l;
    int e = s1 - maxt * v;
    b = min(b, n);
    if(e<0)
        e = 0;
    int ttt = b - e;
    cout << ttt;
}
int main()
{
    t();
    return 0;
}
