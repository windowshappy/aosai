#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,j=1,ans=0;cin>>k;
	while(k!=0)
	{
		if(k>=j)
		{
			k-=j;
			ans+=j*j;
		}
		else
		{
			ans+=k*j;
			k=0;
		}
		j++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
