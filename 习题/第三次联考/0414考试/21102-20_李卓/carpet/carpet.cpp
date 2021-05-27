#include<iostream>
#include<cstdio>
using namespace std;
int n,a[10001],b[10001],g[10001],k[10001],x,y;
bool t;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}cin>>x>>y;
	for(int i=n;i>=1;--i){
		if(a[i]<=x&&a[i]+g[i]>=x&&b[i]<=y&&b[i]+k[i]>=y){
			cout<<i<<endl;t=1;break;
		}
	}
	if(t==0)cout<<"-1"<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
