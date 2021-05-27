#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,a[10000],b[10000],c[10000],d[10000],x,y;
int main()
{
	freopen("carpet.in","w",stdin);
	freopen("carpet.out","r",stdout);
	int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++)
	{
		if(x>=a[i] && x<=c[i]+a[i] && y>=b[i] && y<=b[i]+d[i])
		{
			sum++;
		}
	}
	if(sum==0)
	{
		cout<<"-1";
	}
	else
	{
		cout<<sum;
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
//1023 0233
