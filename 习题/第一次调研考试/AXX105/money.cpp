#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	double n,a;
	scanf("%lf",&n);
	if(n<=150)
	{
		a=n*0.4463;
	}
	else if(n>=151&&n<=400)
	{
		a=150*0.4463+(n-150)*0.4663;
	}
	else if(n>=401)
	{
		a=150*0.4463+(400-150)*0.4663+(n-400)*0.5663;
	}
	printf("%.1lf",a);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
