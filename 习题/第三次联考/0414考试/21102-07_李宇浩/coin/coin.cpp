#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,sum=0;
	cin>>k;
	int dm=1;
	for(int i=1;i<=10000;i++)
	{
		for(int j=1;j<=dm;j++)
		{
			sum+=dm;
			k--;
			if(k==0)
			{
				cout<<sum;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
	    }
		dm++;
	}
}
