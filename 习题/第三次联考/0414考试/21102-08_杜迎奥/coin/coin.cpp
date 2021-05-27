#include<cstdio>
#include<iostream>
using namespace std;
long long sum,k,n,now=0,day=0;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	while(1)
	{
		now++;
		sum+=now*now;
		day+=now;
		if(day>=k)
		{
			if(day==k)
			{
				cout<<sum;
				break;
			}
			else
			{
				cout<<sum-(day-k)*now;
				break;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
