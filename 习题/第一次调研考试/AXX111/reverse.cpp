#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int s,a,b,c,d,n;
	cin>>n;
	a=n/1000;
	b=n/100%10;
	c=n%100/10;
	d=n%100%10;
	s=d*1000+c*100+b*10+a;
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
