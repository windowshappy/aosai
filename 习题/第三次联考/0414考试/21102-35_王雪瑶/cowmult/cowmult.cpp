#include<iostream>
#include<cstdio>
using namespace std;
int a,b,x[100000001],y[100000001],m,n,s;
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	while(a!=0){
		m++;
		x[m]=a%10;
		a/=10;
	}
	while(b!=0){
		n++;
		y[n]=b%10;
		b/=10;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			s+=x[i]*y[j];
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
