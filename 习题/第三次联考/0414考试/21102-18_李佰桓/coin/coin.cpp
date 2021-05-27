#include<iostream>
#include<cstdio>
using namespace std;
long long ans,k,t=0;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	
	scanf("%lld",&k);
	for(int i=1;i<=k;i++){
		for(int j=1;j<=i;j++){
			ans+=i;
			t++;
			if(t==k){
				printf("%lld",ans);
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
