#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	long long a,ans=0;
	cin>>a;
	while(a!=0)
	{
		ans=ans*10+a%10;
		a/=10;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
