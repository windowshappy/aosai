#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int o=1,s=0,x,n;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		o=o*x;
		s=s*2+o;
	}
	cout<<s+1;
	return 0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
