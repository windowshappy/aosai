#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	long long s=0,n=1;
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		n*=i;
		s+=n;
	}
	printf("%lld",s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

