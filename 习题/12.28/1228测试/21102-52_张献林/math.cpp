#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n,i1,i2,n2;
	cin>>n;
	long long sum1=1;
	long long sum2=0;
	for (i1=1;i1<=n;i1++)
	  {
	  	n2=i1;
	  	for (i2=1;i2<=n2;i2++)
	  	  {
	  	  	sum1=sum1*i2;
	  	  }
	  	sum2=sum2+sum1;  
	  	sum1=1;
	  }
	cout<<sum2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
