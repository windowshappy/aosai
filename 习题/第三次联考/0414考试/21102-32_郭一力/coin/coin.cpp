#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,a=0,b,d,x=0;
	cin>>k;
	for(int i=1;i<=k;i++){
		a=a+i;
		if(a>k){
			b=(k-a+i)*i;
			d=i-1;
			break;
		}
		if(a==k){
			b=i*i;
			d=i-1;
			break;
		}
	}
	for(int i=1;i<=d;i++){
		x=x+i*i;
	}
	int n=x+b;
	cout<<n;
	fclose(stdin);fclose(stdout);
	return 0;
}
