#include<iostream>
#include<cstdio>
using namespace std;
bool v[10010];
int l,a,b,ans=0;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	
	scanf("%d",&l);
	for(int i=1;i<=2;i++){
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			v[j]=1;
		}
	}
	for(int i=0;i<=l;i++){
		if(v[i]==0) ans++;
	}
	printf("%d",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
