#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	long long a,b,s=0,d,e,f;
	cin>>a>>b;
	f=b;
	while(a!=0)
	{
		d=a%10;
		a=a/10;
		while(b!=0)
		{
			e=b%10;
			b=b/10;
			s=s+d*e;
		}
		b=f;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
