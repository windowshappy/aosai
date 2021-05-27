#include<iostream>
#include<cstdio>
using namespace std;
long long x,s=1,ans;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		s=1;
		for(int j=1;j<=i;j++)
			s*=j;
		ans+=s;
	}
	cout<<ans;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
