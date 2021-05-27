#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	long long k,s=0,d=0,y=0;
	cin>>k;
	for(int i=1;i<=30000;i++)
	{
		for(int j=1;j<=i;j++)
		{
			s+=i;
			d++;
			if(d==k)
			{
				cout<<s;
				break;
				y=1;
			}
		}
		if(y==1)
		{
			break;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
