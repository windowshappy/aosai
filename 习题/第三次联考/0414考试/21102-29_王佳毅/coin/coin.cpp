#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","w",stdin);
	freopen("coin.out","r",stdout);
	long long k,s=0,sum=0;
	cin>>k;
	while(k>0)
	{
		s++;
		k-=s;
	}
	for(int i=1;i<=s;i++)
	{
		sum+=i*i;
	}
	cout<<sum+k*s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
