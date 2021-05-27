#include<iostream>
#include<cstdio>
using namespace std;
int a[100001],b[100001],j[100001],k[100001];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n;
	int x,y;
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i]>>b[i]>>j[i]>>k[i];
	cin>>x>>y;
	for(int i=n;i>0;i--)
	{
		if(a[i]<=x&&b[i]<=y&&a[i]+j[i]>=x&&b[i]+k[i]>=y)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"-1";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
