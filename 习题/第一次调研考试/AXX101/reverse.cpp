#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int n,a,b,c,d,s;
	cin>>n;
	if(n<0)
	{
		n=abs(n);
		a=n/1000;
		b=(n%1000)/100;
		c=(n%100)/10;
		d=n%10;
		if(d==0&&c==0)
			s=0;
		if(d==0&&c!=0)
			cout<<"-"<<c<<b<<a;
		else if(s==0&&b!=0)
			cout<<"-"<<b<<a;
		else if(s==0&&b==0)
			cout<<"-"<<a;
	}
	else if(n==0)
		cout<<"0";
	else
	{
		a=n/1000;
		b=(n%1000)/100;
		c=(n%100)/10;
		d=n%10;
		cout<<d<<c<<b<<a;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
