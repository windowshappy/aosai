#include<cstdio> 
#include<iostream>
using namespace std;
int main()
{
	int x,n;
	cin>>x>>n;
	for(int i=1;i<=n;++i)
	{
		x=x+x*0.001;
	 } 
	printf("%.4lf",x);
return 0;
}
