#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	
	long long n,ans=0,a=1;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		a*=i;
		ans+=a;
	}
	printf("%lld",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
