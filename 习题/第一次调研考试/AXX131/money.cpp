#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	int a;
	scanf("%d",&a);
	if(a<=150);
	  printf("%.1d",a*0.4463);
    else if((a>=151) && (a<=400));
	  printf("%.1d",a*0.4663);
	else(a>=401);
	  printf("%.1d",a*0.5663);
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
