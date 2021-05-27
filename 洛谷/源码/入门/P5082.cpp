#include <bits/stdc++.h>

using namespace std;

int main() {
        double n,a,b,c=0,d=0;
        cin>>n;
        for(int i=0; i<n; i++) {
                scanf("%lf\n", &a);
                c+=a;
        }
        for(int i=0; i<n; i++) {
                scanf("%lf\n", &b);
                d+=b;
        }
        printf("%.6lf\n", (c*3-d*2)/(c-d));
        return 0;
}
