#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int a,b,c,d,m,n;
	cin>>m;
	a=m/1000;
	b=(m/100)%10;
	c=(m/10)%10;
	d=m%10;
	n=1000*d+100*c+10*b+a;
	cout<<n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
