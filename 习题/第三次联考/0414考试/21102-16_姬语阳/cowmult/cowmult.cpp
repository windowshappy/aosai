#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,x=0,y=0;cin>>a>>b;
	while(a!=0)
	{
		x+=a%10;
		a/=10;
	}
	while(b!=0)
	{
		y+=b%10;
		b/=10;
	}
	cout<<x*y;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
