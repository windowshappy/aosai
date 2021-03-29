#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int a,b,c,d,e;
	cin>>e;
	e=1000*a+100*b+10*c+d;
	a=b;
	b=a;
	c=d;
	d=c;
	cout<<1000*a+100*b+10*c+d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
