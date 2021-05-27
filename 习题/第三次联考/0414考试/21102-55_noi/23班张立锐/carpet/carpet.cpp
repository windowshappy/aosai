#include<iostream>
#include<cstdio>

using namespace std;

int a[10010],b[10010],g,k;
int n,x,y,a1[10010],b1[10010];
bool q;

int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d%d%d%d",&a[i],&b[i],&g,&k);
		a1[i]=a[i]+g;
		b1[i]=b[i]+k;
	}
	scanf("%d%d",&x,&y);
	for (int i=n;i>=1;i--)
	{
		if ((x<=a1[i])&&(x>=a[i])&&(y<=b1[i])&&(y>=b[i]))
		{
			printf("%d",i);
			q=true;
			break;
		}
	}
	if (q==false)
	{
		printf("-1");
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
