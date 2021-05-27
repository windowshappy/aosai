#include<iostream>
#include<cstdio>
using namespace std;
int n,a[10005],b[1005],g[1005],k[1005],s;
int x,y;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	for(int i=n;i>=1;i--)
	{
		if(a[i]+g[i]>=x&&a[i]<=x&&b[i]+k[i]>=y&&b[i]<=y)
		s=i;
		if(s!=0) 
		{
			cout<<s;return 0;
		}
	}
	if(s==0) 
	{
		cout<<-1;return 0;
	}
	else cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
