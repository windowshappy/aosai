#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n,x,sum=0,b=1;
	cin>>n;
	for(int i=2;i<=n;++i)
	{
	   x=1*i*b;
	   b=x;
	   sum=sum+x;	
	}
	cout<<sum+1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
