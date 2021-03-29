#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	int a;
	cin>>a;
	if(a<=150) printf("%.1lf",a*0.4463);
	else if(a>=151&&a<=400) printf("%.1lf",150*0.4463+(a-150)*0.4663);
	else printf("%.1lf",150*0.4463+(400-150)*0.4663+(a-400)*0.5663);
	fclose(stdin);fclose(stdout);
	return 0;
}
