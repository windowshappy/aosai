#include<iostream>
#include<cstdio>
#include<cmath>
int s[10001][10001];
using namespace std;
int main()
{
	freopen ("carpet.in","r",stdin);
	freopen ("carpet.out","w",stdout);
	
	int n,a,b,g,k ;
	cin>>n;
	for (int l=1;l<=n;l++)
	{
		cin>>a>>b>>g>>k;
		for (int i=a;i<g;i++)
		{
			for (int j=b;j<k;j++)
			{
				s[i][j]=l;
			}
		}
	}
	int x,y;
	cin>>x>>y;
	if (s[x][y]!=0)
	{
		cout<<s[x][y];
	}
	else cout<<-1;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
