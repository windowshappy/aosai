#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,sum=0,i,j,c;
	cin>>a>>b;
	while(a!=0)
	{
		c=b;
		i=a%10;
		while(c!=0)
		{
			j=c%10;
			sum+=i*j;
			c=c/10;
		}
		a=a/10;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
