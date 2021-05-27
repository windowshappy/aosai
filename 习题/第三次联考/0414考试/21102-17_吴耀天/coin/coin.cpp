#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long ans=0;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,day=0;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i;j++)
		{
			ans+=i;
			day++;
			if(day==k)
			{
				cout<<ans;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
