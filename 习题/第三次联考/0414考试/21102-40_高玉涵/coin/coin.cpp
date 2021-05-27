#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	long long k,i,n,a=0,s=0,b,m;
	cin>>k;
	for(i=1;;i++)
	{
		n=i;
		if(n*(n+1)/2<=k)	a++;
		else break;
	}
	for(i=1;i<=a;i++)
	{
		m=i;
		s=s+m*m;
	}
	b=k-(a+1)*a/2;
	s=s+b*(a+1);
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
