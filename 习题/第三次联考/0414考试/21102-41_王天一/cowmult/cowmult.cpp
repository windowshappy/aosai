#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	long long a,b,s=0;
	cin>>a>>b;
	int m=b;
	while(a!=0)
	{
		int x=a%10;
		while(b!=0)
		{
			int y=b%10;
			s=s+x*y;
			b/=10;
		}
		b=m;
		a/=10;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
