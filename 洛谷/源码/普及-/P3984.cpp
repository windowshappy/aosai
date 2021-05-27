#include <bits/stdc++.h>

using namespace std;

void rrr() {
        int n,T,t, day = 0, happily = 0, tt=0;
        cin>>n>>T;
        for (int i = 1; i <= n; i++) {
                cin>>t;
                if(i==1) tt=t;
                day+=T;
                happily = t+T;
        }
        happily-=tt;
        cout<<happily<<"     "<<day;
}

int main() {
        int n,T,t[200001], day = 0, happily = 0, tt=0;
        cin>>n>>T;
        for (int i = 0; i < n; i++) {
                cin>>t[i];
        }
        for(int i=1; i<=t[n-1]; i++) {
                if(i<=happily) day++;
                if(i==t[tt]) {
                        happily = i+T;
                        tt++;
                }

        }
        day+=T;
        cout<<day;
        // rrr();
        return 0;
}
