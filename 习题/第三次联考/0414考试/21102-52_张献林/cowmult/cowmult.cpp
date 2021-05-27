#include<iostream>
#include<cstdio>
using namespace std;
int a1[15],b1[15];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,i1,i2,outn,i,l,z;
	i1=i2=0;
	z=0;
	cin>>a>>b;
	while(a)
	{
		i1++;
		a1[i1]=a%10;
		a/=10;
		
	}
	while(b)
	{
		i2++;
		b1[i2]=b%10;
		b/=10;
		
	}
	for(i=1;i<=i1;i++)
	{
		for(l=1;l<=i2;l++)
		{
			z+=a1[i]*b1[l];
		}
	}
	cout<<z;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
