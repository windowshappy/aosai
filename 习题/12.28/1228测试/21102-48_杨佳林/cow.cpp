#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	long long x,n,max=1,sum=0;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
		sum=max;
		max=max*x;
		max=max+sum;
	}
	cout<<max;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
