#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int n,sum=0,d=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			sum+=i;
			if(d==n)
				break;
			++d;
		}
		if(d==n)
			break;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
