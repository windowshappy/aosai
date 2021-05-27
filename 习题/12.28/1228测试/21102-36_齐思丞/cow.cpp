#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x,n;
	cin>>x>>n;
	x=x+1;
	int s=1;
	for(int i=1;i<=n;i++)
	{
		s=s*x;
	}
	cout<<s<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
