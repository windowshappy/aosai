#include<cstdio>
#include<iostream>
using namespace std;
int n,ans,x,y,a[10010],b[10010],c[10010],d[10010];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	scanf("%d",&n);
	int w,v;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d%d",&a[i],&b[i],&w,&v);
		c[i]=a[i]+w;
		d[i]=b[i]+v;
	}
	scanf("%d%d",&x,&y);
	for(int i=1;i<=n;i++)
	{
		if(a[i]<=x&&b[i]<=y&&c[i]>=x&&d[i]>=y)
		{
			ans++;
		}
	}
	if(ans==0)
	{
		printf("-1");
	}
	else
		printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
