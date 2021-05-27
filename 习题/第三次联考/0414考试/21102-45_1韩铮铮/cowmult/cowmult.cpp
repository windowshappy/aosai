#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,s[1000],n[1000],m=0,v=0,z=0;
	cin>>a>>b;
	while(a!=0)
	{
		m++;
		s[m]=a%10;
		a=a/10;
	
	}
	while(b!=0)
	{
		v++;
		n[v]=b%10;
		b=b/10;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=v;j++)
		{
			z+=s[i]*n[j];
		}
	}
	cout<<z;
	fclose(stdin);fclose(stdout);
	return 0;
}
