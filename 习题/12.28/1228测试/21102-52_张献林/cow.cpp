#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x,n;
	cin>>x>>n;
	int sum=1;
	for (int i=1;i<=n;i++)
	  {
	  	sum=sum+x*sum;
	  }
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
