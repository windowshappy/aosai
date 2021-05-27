#include<iostream>
#include<cstdio>
using namespace std;
const int q=100005;
long long int p[q],a[q],b[q],g[q],k[q];
int main() {
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,ans=0,x,y;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++) {
		if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i]) {
			ans++;
		}
	}
	if(ans==0) {
		cout<<"-1";
	}
	else {
		cout<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
