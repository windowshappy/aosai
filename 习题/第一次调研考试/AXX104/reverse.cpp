#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int a,b,c,d,s,x;
	cin>>s;
	a=s%10;
	b=(s-a)/10%10;
	c=(s-a-10*b)/100%10;
	d=(s-a-10*b-100*c)/1000%10;
	x=a*1000+b*100+c*10+d;
	cout<<x<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
