#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a;
	cin>>a;
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	if(a<=150) printf("%.1lf",0.4463*a);
	else{
	    if(151<=a<=400) printf("%.1lf",150*0.4463+0.4663*(a-150));
	    else printf("%.1lf",150*0.4463+250*0.4663+(a-250)*0.5663);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
