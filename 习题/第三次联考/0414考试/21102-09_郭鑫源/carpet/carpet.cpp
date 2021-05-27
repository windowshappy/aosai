#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,x,y;
int a[10100],b[10100],g[10100],k[10100];
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
    	if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
    	{
    		cout<<i;
    		fclose(stdin);
            fclose(stdout);
            return 0;
    	}
    }
    cout<<-1;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
