#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	double a,b,c,d,abcd,n;
	cin>>abcd;
	a=abcd%1000;
	b=abcd%100-10*10;
	c=abcd&10-100*a-10*b;
	d=abcd
	if(n>0)
	{
		cout<<d<<c<<b<<a<<endl;
	}
	else
	{
		cout<<"-"<<d<<c<<b<<a<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
