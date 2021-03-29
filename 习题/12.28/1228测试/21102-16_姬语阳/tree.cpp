#include<iostream>
#include<cstdio>
using namespace std;
bool a[10002];
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l;
	scanf("%d",&l);
	for(int i=0;i<=l;i++)
	{
		a[i]=1;
	}
	for(int i=1;i<=2;i++)
	{
		int bg,ed;
		scanf("%d%d",&bg,&ed);
		for(int j=bg;j<=ed;j++)
		{
			a[j]=0;
		}
	}
	int ans=0;
	for(int i=0;i<=l;i++)
	{
		if(a[i]) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
