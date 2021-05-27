#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[11000],b[11000],g[11000],k[11000];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n;
	long long x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	for(int i=n;i>=1;i--)
	{
		if(a[i]<=x&&a[i]+g[i]>=y&&b[i]<=x&&b[i]+k[i]>=y)
		{
			cout<<i;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
	}
	cout<<"-1";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
