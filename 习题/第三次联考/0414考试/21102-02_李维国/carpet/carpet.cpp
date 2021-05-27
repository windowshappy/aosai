#include<iostream>
#include<cstdio>
using namespace std;
int a[100001],b[100001],g[100001],k[100001],n,x,s;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>s;
	for(int i=n;i>=1;i--)
	{
		if((x>=a[i]&&x<=a[i]+g[i])&&(s>=b[i]&&s<=b[i]+k[i]))
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
