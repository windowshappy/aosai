#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	int a;double ans;
	cin>>a;
	if(a<=150) ans=a*0.4463;
	else if(a<=400) ans=150*0.4463+(a-150)*0.4663;
	else ans=150*0.4463+250*0.4663+(a-400)*0.5663;
	printf("%.1lf",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
