#include<cstdio>
#include<iostream>
using namespace std;
//int map[10001][10001];
int xx[100005];
int yy[100005];
int n,a,b,g,k,x,y;
//inline void draw(int a,int b,int g,int k,int q)
//{
//	for(register int i=a; i<=a+g;i++)
//	{
//		for(register int j=b;j<=b+k;j++)
//		{
//			map[i][j]=q;
//		}
//	}
//	return;
//}
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		scanf("%d%d%d%d",&a,&b,&g,&k);
		//draw(a,b,g,k,i);
		for(int j=a; j<=a+g;j++)
		{
			xx[j]=i;
		}
		for(int j=b; j<=b+k;j++)
		{
			yy[j]=i;
		}
	}
	cin>>x>>y;
	if(xx[x]&&yy[y]&&(xx[x]==yy[y]))
	{
		cout<<xx[x];
	}
	else
	{
		cout<<-1;
	}
//	if(map[x][y])	cout<<map[x][y];
//	else cout<<-1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
