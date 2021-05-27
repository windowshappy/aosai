#include<iostream>
#include<cstdio>
int a[100];
int b[100];
using namespace std;
int main()
{
	freopen("cowmult.in","w",stdin);
	freopen("cowmult.out","r",stdout);
	int x,y,sum=0,m=2,n=2;
	cin>>x>>y;
	a[1]=x%10;
	b[1]=y%10;
	while(x>0)
	{	
		x=x/10;
		a[n]=x%10;
		n++;
	}
	while(y>0)
	{
		y=y/10;
		b[m]=y%10;
		m++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			sum+=a[i]*b[j];
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
