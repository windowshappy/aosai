#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int a[10005],b[10005],g[10005],k[10005];
    int c[10005],d[10005];
    int sum[10005];
	int n;
	cin>>n;
	int x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
		c[i]=a[i];
		d[i]=b[i];
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++)
	{
		a[i]+=g[i];
		b[i]+=k[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(x<=a[i]&&x>=c[i]&&y<=b[i]&&y>=d[i])
		{
		sum[i]=i;		
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-1;j++)
		{
			if(sum[j]<sum[j+1])
			{
				swap(sum[j],sum[j+1]);
			}
		}
	}
	if(sum[1]==0)
	{
		cout<<"-1";
	}
	else
	{
		cout<<sum[1];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
