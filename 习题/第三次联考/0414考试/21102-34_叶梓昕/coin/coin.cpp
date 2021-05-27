#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,s=0,n;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		s+=i*i;
		k-=i;
		n=i+1;
	}
	for(int i=1;i<=k;i++)	s+=n;
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
