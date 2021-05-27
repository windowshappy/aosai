#include<iostream>
#include<cstdio>
using namespace std;
long long x,n,ans=1;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	
	cin>>x>>n;
	for(int i=1;i<=n;i++)
		ans=ans+ans*x;
	cout<<ans;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
