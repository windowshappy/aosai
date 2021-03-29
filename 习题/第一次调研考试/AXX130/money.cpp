#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	double a;
	cin>>a;
	if(a<=150)
	printf("%0.1lf",a*0.4463);
	if((a>=151)&&(a<=400))
	printf("%0.1lf",a*0.4663);
	if(a>=401)
	printf("%0.1lf",a*0.5663);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
