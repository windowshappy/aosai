#include<iostream>
#include<cstdio>
using namespace std;
int m[5000][5000];
int main()
{
 	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,a,b,g,k,x,y;
	cin>>n;
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
		{
			m[i][j]=-1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>g>>k;
		for(int c=0;c<g;c++)
		{
			for(int d=0;d<k;d++)
			{
				m[a+c][b+d]=i;
			}
		}
	}
	cin>>x>>y;
	cout<<m[x][y];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
