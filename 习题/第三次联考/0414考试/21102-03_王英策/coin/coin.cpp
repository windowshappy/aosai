#include<cstdio>
#include<iostream>
using namespace std;
int n,ans,k,x;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	scanf("%d",&n);
	x=1;
	for(int i=1;i<=n;i++)
	{
		if(i-x==k)
		{
			k++;
			x=i;
		}
		ans+=k;
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
