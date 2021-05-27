#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
long long c[100000000],d[100000000];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,i=1,j=1,e=0,f,g;
	cin>>a>>b;
	f=a;g=b;
	while(a!=0)
	{
		c[i]=a%10;
		a=a/10;
		i=i+1;
	}
	while(b!=0)
	{
		d[j]=b%10;
		b=b/10;
		j=j+1;
	}
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=g;j++)
		{
			e=e+c[i]*d[j];
		}
	}
	cout<<e;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
