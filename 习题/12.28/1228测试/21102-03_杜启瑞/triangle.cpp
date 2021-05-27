#include<iostream>
#include<cstdio>
using namespace std;
int n,cnt;
int main(){
	freopen("triangle.in","r",stdin);
	freopen("triangle.out","w",stdout);
	scanf("%d",&n);
	for(register int i=1;i<=n;i+=1){
		if(i!=1) printf("\n");
		for(register int j=1;j<=i;j+=1){
			cnt=(cnt+1)%10;
			printf("%d",cnt);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
