#include<iostream>
#include<cstdio>
using namespace std;
struct dt
{
	int a,b,g,k;
}t[1002];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,ans=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d%d",&t[i].a,&t[i].b,&t[i].g,&t[i].k);
	}
	int x,y;cin>>x>>y;
	for(int i=n;i>=1;i--)
	{
		if(t[i].a<=x&&t[i].a+t[i].g>=x&&t[i].b<=y&&t[i].b+t[i].k>=y)
		{
			ans=i;break;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
