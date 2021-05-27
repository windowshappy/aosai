#include<iostream>
#include<cstdio>
using namespace std;
char a[11];
int b[11];
int ans;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]);
	for(int i=1;i<=9;i++){
		b[i]=a[i]-'0';
		ans+=b[i]*i;
	}
	ans%=11;
	if(a[10]=='X')b[10]=10;
	else b[10]=a[10]-'0';
	if(ans==b[10])cout<<"Right";
	else printf("%d-%d%d%d-%d%d%d%d%d-%d",b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],b[9],ans);
	fclose(stdin);
	fclose(stdout);
}
