#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	double a,b,c,sum=0;
	cin>>a>>b>>c;
	sum=a*0.2+b*0.3+c*0.5;
	printf("%.0lf",sum);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
