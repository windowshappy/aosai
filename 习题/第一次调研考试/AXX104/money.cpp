#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	double a;
	scanf("%lf",&a);
	if(a<=150){
		printf("%.1lf\n",a*0.4463);
	}
	else if(150<a&&a<=400){
		printf("%.1lf\n",150*0.4463+(a-150)*0.4663);
	}
	else if(400<a){
		printf("%.1lf\n",150*0.4463+250*0.4663+(a-400)*0.5663);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
