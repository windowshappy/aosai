#include<iostream>
#include<cstdio>
using namespace std;
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
int main()
{
	freopen("mine.in","r",stdin);
    freopen("mine.out","w",stdout);
	
	char mine[101][101];
	int sum[101][101]={0};
	int n,m,i,j,ni,nj,k,ans=0;
	scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			mine[i][j]=getchar();
		}
		getchar();
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(mine[i][j]=='?')
			for(k=0;k<8;k++)
			{
				ni=i+dx[k];
				nj=j+dy[k];
				if(ni>=0&&ni<n&&nj>=0&&nj<m&&mine[ni][nj]=='*')
				{
					sum[i][j]++;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		 if(mine[i][j]=='*')  putchar('*');
		 else
		 putchar(sum[i][j]+48);
		  	
		}
		putchar('\n');
	}
	return 0;
}
