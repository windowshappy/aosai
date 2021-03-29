#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n;
	long long s=0,m=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		m=m*i;
		s=s+m;
	}
	printf("%lld",s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
