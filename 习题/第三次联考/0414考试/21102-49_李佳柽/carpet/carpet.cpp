#include<iostream>
#include<cstdio>
using namespace std;
int a[10001],b[10001],x[10001],y[10001];
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
    int n;cin>>n;
    int flag=1;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>x[i]>>y[i];
    }
    int m,d;cin>>m>>d;
    for(int i=n;i>=1;i--){
        if(m>=a[i]&&m<=a[i]+x[i]&&d>=b[i]&&d<=b[i]+y[i]){
            cout<<i;flag=0;
            break;
        }
    }
    if(flag==1) cout<<-1;
    fclose(stdin);fclose(stdout);
    return 0;
}

