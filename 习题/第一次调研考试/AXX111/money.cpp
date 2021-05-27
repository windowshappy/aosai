#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	double n,s;
	cin>>n;
	if(n<=150)
	{
		s=n*0.4463;
	}
	if(n>=151&&n<=400)
	{
		s=150*0.4463+(n-150)*0.4663;
	}
	if(n>=401)
	{
		s=150*0.4463+(400-150)*0.4663+(n-400)*0.5663;
	}
	printf("%.1lf",s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
