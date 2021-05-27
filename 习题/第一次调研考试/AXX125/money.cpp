#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	
	int n;
	double ans;
	cin>>n;
	if(n<=150)
	{
		ans=0.4463*n;
	}
	else
	{
		if(n>150 and n<=400)
		{
			ans=150*0.4463+0.4663*(n-150);
		}
		else
		{
			ans=150*0.4463+0.4663*(400-150)+0.5663*(n-400);
		}
	}
	
	printf("%.1lf",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
