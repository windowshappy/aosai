#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	int n;
	double s;
	cin>>n;
	if(n<=150) s=0.4463*n;
	if(n>150&&n<=400) s=150*0.4463+(n-150)*0.4663;
	if(n>400) s=150*0.4463+250*0.4663+(n-400)*0.5663;
	printf("%.1lf",s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
