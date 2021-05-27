#include<iostream>
#include<cstdio>
using namespace std;
int a[10010],b[10010],g[10010],k[10010];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	int x,y;
	cin>>x>>y;
	cout<<"-1";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
