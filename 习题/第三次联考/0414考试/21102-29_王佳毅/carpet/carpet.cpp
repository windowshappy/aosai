#include<iostream>
#include<cstdio>
using namespace std;
int t[1000][1000];
int main()
{
	freopen("carpet.in","w",stdin);
    freopen("carpet.out","r",stdout);
    int n,a,b,g,k,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a>>b>>g>>k;
    	for(int j=0;j<=g;j++)
    	{
    		for(int l=0;l<=k;l++)
    		{
    			t[a+j][b+l]=i;
    		}
    	}
    }
    cin>>x>>y;
    if(t[x][y]==0)
    {
    	cout<<"-1";
    }
    else
    cout<<t[x][y];
    fclose(stdin);
    fclose(stdout);
    return 0;
}
