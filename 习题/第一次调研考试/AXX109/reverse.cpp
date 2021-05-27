#include<iostream>
#include<cstdio>
int m[9],n[9];
using namespace std;
int main(){
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);	
	int a;
	cin>>a;
	for(int i=1;i<=4;i++){
		m[i]=a%10;
		a=a/10;
	}
	cout<<m[1]*1000+m[2]*100+m[3]*10+m[4];
	fclose(stdin); fclose(stdout);
	return 0;
}
