#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	freopen("money.in,","r",stdin);
	freopen("money.out","w",stdout);
	double n;
	cin>>n;
	if(n<=150)
	{
		printf("%.1lf",n*0.4463);
	}
	if((n>150)&&(n<=400))
	{
		printf("%.1lf",(n-150)*0.4663+150*0.4463);
	}
	if(n>400)
	{
		printf("%.1lf",150*0.4463+(400-150)*0.4663+(n-400)*0.5663);
	}		
	fclose(stdin);
	fclose(stdout);
	return 0;
}
