#include<iostream>
#include<cstdio>
using namespace std;
int w[20000][5];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,a,b,g,k,x,y,now=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=4;j++)
		{
			cin>>w[i][j];
		}
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++)
	{
		if(x>=w[i][1]&&x<=w[i][1]+w[i][3]&&y>=w[i][2]&&y<=w[i][2]+w[i][4])
		{
			now=i;
		}
	}
	cout<<now;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
