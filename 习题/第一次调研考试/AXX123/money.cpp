#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	int a;
	double b;
	cin>>a;
	if(a<=150)
	{
		b=a*0.4463;
	}
	else if((a>=151)&&(a<=400))
	{
		b=150*0.4463+(a-150)*0.4663;
	}
	else
	{
		b=150*0.4463+(400-150)*0.4663+(a-400)*0.5663;
	}
	printf("%.1lf",b);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
