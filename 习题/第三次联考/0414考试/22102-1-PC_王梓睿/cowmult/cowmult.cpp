#include<iostream>
#include<cstdio>
using namespace std;
int x[15],y[15];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,c,d;
	int sum=0,tot=0;
	cin>>a>>b;
	int s1=0,s2=0;
	c=a;
	d=b;
	while(a!=0)
	{
		a/=10;
		s1++;
	}
	while(b!=0)
	{
		b/=10;
		s2++; 
	}
	for(int i=1;i<=s1;i++)
	{
		x[i]=c%10;
		c/=10;
	}
	for(int i=1;i<=s2;i++)
	{
		y[i]=d%10;
		d/=10;
	}
	for(int i=1;i<=s1;i++)
	{
		for(int j=1;j<=s2;j++)
		{
			sum=x[i]*y[j];
			tot+=sum;
		}
	}
	cout<<tot;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
