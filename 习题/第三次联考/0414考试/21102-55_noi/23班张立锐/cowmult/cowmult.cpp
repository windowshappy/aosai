#include<iostream>
#include<cstdio>

using namespace std;

int sum,a,b;
int sum1,c,d;
int ans;

int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	scanf("%d%d",&a,&b);
	while (a!=0)
	{
		c=a%10;
		a/=10;
		sum+=c;
	}
	while (b!=0)
	{
		d=b%10;
		b/=10;
		sum1+=d;
	}
	ans=sum*sum1;
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

