#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x,n,sum=0;
	cin>>x>>n;
	int y=x+1;
	for(int i=1;i<=n-1;i++)
	{
		y*=x;
		sum+=y;
	}
	cout<<sum+x+1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
