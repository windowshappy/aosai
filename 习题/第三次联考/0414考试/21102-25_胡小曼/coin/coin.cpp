#include<iostream>
#include<cstdio>
using namespace std;
int n,s,k;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	for(int i=1; ;i++)
	{
		for(int j=1;j<=i;j++)
		{
			s=s+i;
			n++;
			if(n==k)
			{	cout<<s;
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
