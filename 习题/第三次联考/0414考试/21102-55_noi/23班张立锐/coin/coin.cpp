#include<iostream>
#include<cstdio>

using namespace std;

int a,k,sum;

int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	scanf("%d",&k);
	a=k;
	for (int i=1;i<=k;i++)
	{
		if (a<i)
		{
			sum+=a*i;
			break;
		}
		a-=i;
		sum+=i*i;
	}
	printf("%d",sum);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
