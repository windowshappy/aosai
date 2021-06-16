#include <bits/stdc++.h>
using namespace std;
int n,f[1111];

int s(int x){
    int ans = 1;
    if(f[x]!=-1){
        return f[x];
    }
    for(int i=1;i<=x/2;i++){
        ans+=s(i);
    }
    return f[x] = ans;
}

int main() {
    cin>>n;
    memset(f, -1, sizeof(f));
    f[1] = 1;
    cout<<s(n)<<endl;
    return 0;
}
