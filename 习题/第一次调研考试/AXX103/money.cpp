#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	double a,s;
	scanf("%lf",&a);
	if(a<150){
		s=a*0.4463;
	}
	if(a>=151&&a<=400){
		s=150*0.4463+(a-150)*0.4663;
	}
	if(a>=401){
		s=150*0.4463+250*0.4663+(a-400)*0.5663;
	}
	printf("%.1lf",s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
