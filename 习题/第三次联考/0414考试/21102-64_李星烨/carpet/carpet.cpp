#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int n,a[10002],b[10002],g[10002],k[10002];
int x,y;
int t[10002][10002];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    scanf("%d %d %d %d",&a[i],&b[i],&g[i],&k[i]);
	    for(int u=a[i];u<=g[i]+a[i];u++)
	    {
	    	for(int j=b[i];j<=k[i]+b[i];j++)
	    	{
	    		t[j][u]=i+1;
	    	}
	    }
	}
	scanf("%d %d",&x,&y);
	if(t[y][x]==0)
	{
	    cout<<-1;
	}
	else cout<<t[y][x];
	fclose(stdin);fclose(stdout);
	return 0;
}
/*3
1 0 2 3
0 2 3 3
2 1 3 3
2 2*/
