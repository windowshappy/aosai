#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,m,n,s=0;
	cin>>a>>b;
	int c=b;
	while(a)
	{
		m=a%10;
		while(b)
		{
			n=b%10;
			s+=m*n;
			b=b/10;
		}
		a=a/10;
		b=c;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
