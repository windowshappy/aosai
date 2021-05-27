#include<iostream>
using namespace std;
int main()
{
	int a,b,c,k,s;
	cin>>k;
	a=1;b=1;
	for(int i=3;i<=k;++i)
	{
		c=a+b;a=b;b=c;
	}
	cout<<b;
	return 0;
}
