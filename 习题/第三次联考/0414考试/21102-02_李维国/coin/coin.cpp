#include<iostream>
#include<cstdio>
using namespace std;
long long k,ans,a;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	for(int i=1;k!=0;i++)
	{
		a=i;
		while(a!=0)
		{
			a--;
			ans+=i;
			k--;
			if(k==0)
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
