#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	unsigned long long s=0,ans=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
		s+=ans;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
