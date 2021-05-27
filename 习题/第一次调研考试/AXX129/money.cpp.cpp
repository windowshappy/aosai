#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	double a,b;
	cin>>a;
	if(a<=150)	
	{	b=0.4463*a;
		printf("%.1lf",b);
	}
	else
	if((a>150)&&(a<=400))
	{b=0.4663*a-3;
    printf("%0.1lf",b);
	}
		else{
			b=0.5663*a-43;
			printf("%0.1lf",b);
			}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
