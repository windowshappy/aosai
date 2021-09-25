#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    long long x = ceil(1.0 * n / a);
    long long y = ceil(1.0 * m / a);
    cout << x * y;
    return 0;
}
