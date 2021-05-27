#include<iostream>
#include<cstdio>
using namespace std;
int c[10010][10010];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
    int n,a,b,g,k,f=0,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	f++;
    	cin>>a>>b>>g>>k;
    	for(int j=a;j<=k;j++)
    	{
    		for(int h=b;h<=g;h++)
    		{
    			c[j][h]=f;
    		}
    	}
    }
    cin>>x>>y;
    if(c[x][y]>0)
	{
		cout<<c[x][y];
	}
    else
	{
    	cout<<-1;
    }
	fclose(stdin);
	fclose(stdout);
    return 0;
}
