#include<cstdio>
using namespace std;

long long ans=0;
long long k=0;
long long s=1;

int main()
{
    freopen("coin.in","w",stdin);
    freopen("coin.out","r",stdout);
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		printf("0");
		return 0;
	}
	for(int i=1; ; i++)
	{
		for(int j=1; j<=i; j++)
		{
			ans+=i;
			k++;
			if(k==n)
			{
				printf("%lld",ans);
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
