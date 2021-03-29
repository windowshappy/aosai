#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int x,a,b,c,d,m;
	cin>>x;
	a=x/1000;
	b=x/100%10;
	c=x/10%10;
	d=x%10;
	m=d*1000+c*100+b*10+a;
	cout<<m;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
