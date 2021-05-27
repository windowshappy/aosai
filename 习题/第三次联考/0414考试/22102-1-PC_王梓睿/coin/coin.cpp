#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k;
	cin>>k;
	long long sum=0,day=0;
	int i=1;
	while(day<k)
	{
			for(int j=1;j<=i;j++)
			{
				day++;
				sum+=i;
				if(day==k)
					break;
			}
		i++;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
