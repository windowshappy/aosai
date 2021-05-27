#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
string a,b;
long long sum;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	long long al=a.size(),bl=b.size();
	if(al<bl)
	{
		swap(a,b);
	}
	for(long long j=0; j<min(al,bl);j++)
	{
		long long x=b[j]-'0';
		for(long long i=0; i<max(al,bl);i++)
		{	
			sum+=(a[i]-'0')*x;
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
