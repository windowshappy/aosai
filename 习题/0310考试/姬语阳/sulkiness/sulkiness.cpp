#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int m=-1,md=0;
	for(int i=1;i<=7;i++)
	{
		int a,b;cin>>a>>b;
		a+=b;
		if(a>=8&&m<a)
		{
			m=a;md=i;
		}
	}
	cout<<md;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
