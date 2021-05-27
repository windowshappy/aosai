#include<iostream>
#include<cstdio>
using namespace std;
int main(){
freopen("coin.in","r",stdin);
freopen("coin.out","w",stdout);
	int k;
	cin>>k;
	int sum=0; int d=1; int a;
	for(int i=1;i<=k;i=i+d){
		sum+=d*d;
		d++;
		a=i;
	}
	if(a==k) cout<<sum;
	else{ sum=sum-(a-k)*d;
	cout<<sum;
	} 
	
fclose(stdin);
fclose(stdout);return 0;
}
