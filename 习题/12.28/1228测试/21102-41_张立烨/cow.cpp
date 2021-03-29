#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	long long x,n,s=1;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
	    s*=x;
	    s+=n;
}
	s=s-1;
	cout<<s;
	fclose(stdin); fclose(stdout);
	return 0;
}
