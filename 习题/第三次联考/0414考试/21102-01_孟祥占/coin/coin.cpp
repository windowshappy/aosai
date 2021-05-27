#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k;
	int i,j=1,sum=0;
	int ans=0;
	
	cin>>k;
	for(i=1;j<=k;i++) //每天给i个金币
	{
		sum+=i; //一直给到第sum天
		for(j;j<=sum&&j<=k;j++) //当前为第j天
		ans+=i;
	}
	cout<<ans;
	
	fclose(stdin); fclose(stdout);
	return 0;
}
