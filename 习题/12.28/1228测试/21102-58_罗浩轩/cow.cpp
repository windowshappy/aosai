#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x,n,sum=1,m=0;
	cin>>x>>n;
	for(int i=1;i<=n;++i)
	{
		m=1*x*sum;
		sum=sum+m;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
