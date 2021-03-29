#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	long long x,n,a=1;
	scanf("%lld%lld",&x,&n);
	for(int i=1;i<=n;i++)
	{
		a*=x+1;
	}
	printf("%lld",a);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
