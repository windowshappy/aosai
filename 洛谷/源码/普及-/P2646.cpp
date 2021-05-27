#include <bits/stdc++.h>

using namespace std;

int main() {
        string a;
        cin>>a;
        long long z = 0,y = 0;
        for (long long i = 0; i < a.size(); i++) {
                if(a[i]=='z') z++;
                if(a[i]=='y') y+=z*(z-1)/2;

        }
        cout<<y;
        return 0;
}
