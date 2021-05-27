#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	char a[10],b[10];
	int x=0,y=0;
	scanf("%s",a);
	scanf("%s",b);
	for(int i=0;i<strlen(a);i++){
		x+=a[i]-'0';
	}
	for(int i=0;i<strlen(b);i++){
		y+=b[i]-'0';
	}
	cout<<x*y;
	fclose(stdin);
	fclose(stdout);
}
