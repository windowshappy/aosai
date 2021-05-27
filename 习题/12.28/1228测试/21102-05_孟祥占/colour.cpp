//chr:GB2312
#include<iostream>
#include<cstdio>
using namespace std;

int c[20][5];
bool v[20][20];
int ans;
int n,m;

void dfs(int x)
{
	if(x==n+1)
	++ans;
	else
	for(int i=1;i<=4;i++)
	if(!c[x][i])
	{
		for(int j=1;j<=n;j++)
		if(v[x][j])
		++c[j][i];
		
		dfs(x+1);
		
		for(int j=1;j<=n;j++)
		if(v[x][j])
		--c[j][i];
	}
}
int main()
{
	freopen("colour.in","r",stdin);
	freopen("colour.out","w",stdout);
	int i;
	
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a][b]=v[b][a]=1;
	}
	dfs(1);
	cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}

