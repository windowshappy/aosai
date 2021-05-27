#include<iostream>
#include<cstdio>
using namespace std;
int n,qian=1,sum=0,tian=0;
int main()
{
	freopen("coin.in","w",stdin);
	freopen("coin.out","r",stdout);
	cin>>n;
	while(1)
	{
		for(int j=1;j<=qian;j++)
		{
			if(tian==n)
			{
				cout<<sum;
				return 0;
			}
			else
			{
				sum+=qian;
				tian++;
			}
		}
		qian++;
	}
	fclose(stdin);
	fclose(stdout);
}
