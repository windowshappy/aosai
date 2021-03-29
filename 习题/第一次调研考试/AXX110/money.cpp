#include<iostream>
#include<cstdio>
using namespace std;
double n,ans;
int main(){
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	
	scanf("%lf",&n);
	if(n<=150) ans+=n*0.4463;
	else if(n>150&&n<=400){
		ans+=150*0.4463;
		n-=150;
		ans+=n*0.4663;
	}
	else if(n>400){
		ans=150*0.4463+(400-150)*0.4663;
		n-=400;
		ans+=n*0.5663;
	}
	printf("%.1lf",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
