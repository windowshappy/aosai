#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	long long n,x,y,z,c=0,i;
	cin>>n;
	long long a[n+1],b[n+1],g[n+1],k[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	for(i=1;i<=n;i++)
	{
		if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
		{
			z=i;
			c++;			
		}
			
	}
	if(c!=0) cout<<z;
	else cout<<"-1";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
