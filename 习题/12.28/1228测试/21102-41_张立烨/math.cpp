#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	long long n,s=1;
	cin>>n;
	for(int i=1;i<=n;i++){
	   s=n*(n-1);
	   s+=n;
	}
	cout<<s;
	fclose(stdin); fclose(stdout);
	return 0;
}
