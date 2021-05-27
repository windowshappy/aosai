#include<iostream>
#include<cstdio>
using namespace std;
long long x,n,ans=1,a;
int main(){
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	
	scanf("%lld%lld",&x,&n);
	for(int i=1;i<=n;i++){
		a=ans*x;
		ans+=a;
	}
	printf("%lld",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
