#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	long long k,s=0;
	cin>>k;
	for(int i=1; ;i++)
	{
		for(int j=1;j<=i;j++)
		{
			s=s+i;
			k--;
			if(k==0)
			{
				cout<<s;
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
