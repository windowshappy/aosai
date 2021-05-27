#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	long long a,b;
	cin>>a>>b;
	int c=0,d=0;
	while(a!=0)
	{
		c+=a%10;
		a/=10;
	}
	while(b!=0)
	{
		d+=b%10;
		b/=10;
	}
	cout<<c*d;
	return 0;
	fclose(stdin);fclose(stdout);
	return 0;
}
