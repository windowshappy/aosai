#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=a*0.2+b*0.3+c*0.5;
	printf("%.0lf",d);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
