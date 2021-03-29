#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int a,b,c,d,e;
	cin>>a;
	b=a/1000;
	c=a%1000/100;
	d=a%1000%100/10;
	e=a%1000%100%10;
	cout<<1000*e+100*d+10*c+b;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
