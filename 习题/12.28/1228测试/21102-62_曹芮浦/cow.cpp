#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x,n,a,sum=0;
	cin>>x>>n;
	a=pow(11,n-1);
	sum=(x+1)*a;
	cout<<sum<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;	 
}
