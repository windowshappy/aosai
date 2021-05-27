#include<iostream>
#include<cstdio>
using namespace std;
int n,ans=-1;
long long a1,a2;
struct dt{
	int a,b,g,k;
} d[11000];
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d%d",&d[i].a,&d[i].b,&d[i].g,&d[i].k);
	}
	scanf("%lld%lld",&a1,&a2);
	for(int i=n;i>=1;i--){
		if(d[i].a<=a1&&d[i].a+d[i].g>=a1
		 &&d[i].b<=a2&&d[i].b+d[i].k>=a2){
		 	ans=i;
		 	break;
		 }
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
