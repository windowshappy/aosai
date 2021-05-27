#include<iostream>
#include<cstdio>
using namespace std;
long long ans=0,a=1;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a*=i;
		ans+=a;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
