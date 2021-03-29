#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	long long s=0,n,t=1,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		s=s+t*i;
		x=t*i;
		t=x;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
