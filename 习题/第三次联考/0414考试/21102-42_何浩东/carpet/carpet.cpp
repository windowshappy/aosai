#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int d[10001][10001];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,i,j,l,a,b,g,k,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d%d",&a,&b,&g,&k);
		for(j=a;j<=g;j++)
		{
			for(l=b;l<=k;l++)
			{
				d[j][l]=i;
			}
		}
	}
	scanf("%d%d",&x,&y);
	if(d[x][y]==0)
	{
		cout<<"-1";
	}
	else
	{
		printf("%d",d[x][y]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
