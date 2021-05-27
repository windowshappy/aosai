#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
    int n,x,y,z=0;
    cin>>n;
    int a[n+1],b[n+1],g[n+1],k[n+1];
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    cin>>x>>y;
    for(int i=n;i>=1;i--)
    {
    	if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
    	{
    		cout<<i;
    		z=1;
    		break;
    	}
    }
    if(z!=1)
    {
    	cout<<"-1";
    }
	fclose(stdin);
	fclose(stdout);
	return 0;
}
