#include<iostream>
#include<cstdio>
using namespace std;
int n,x,f[2021][3],t[2021],ans;
inline int Max(int a,int b){
	return a>b?a:b;
}
int main(){
	freopen("seq.in","r",stdin);
	freopen("seq.out","w",stdout);
	scanf("%d",&n);
	for(register int i=1;i<=n;i+=1){
		scanf("%d",&x);
		t[x]+=1;
	}
	f[1][1]=t[1];
	for(register int i=2;i<=2020;i+=1){
		f[i][1]=Max(f[i-1][2]+t[i],f[i-2][1]+t[i]);
		f[i][2]=Max(f[i-1][1],f[i-1][2]);
	}
	ans=n-Max(f[2020][1],f[2020][2]);
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
