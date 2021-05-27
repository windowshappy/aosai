#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x,n,s=1;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		s+=x*s;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
