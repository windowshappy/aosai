#include<iostream>
#include<cstdio>
using namespace std;
int a,b,sum=0,x,y;
int main()
{
	freopen("cowmult.in","w",stdin);
	freopen("cowmult.out","r",stdout);
	cin>>a>>b;
	x=a;y=b;
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100;j++)
		{
			sum+=(x%10)*(y%10);
			y/=10;
		}
		x/=10;
		y=b;
		if(x==0)
		{
			cout<<sum;
			return 0;
		}
	}
	fclose(stdin);
	fclose(stdout);
}
