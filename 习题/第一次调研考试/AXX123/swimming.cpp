#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	if(d>b)
	{
		e=c-a;
		f=d-b;
	}
	else
	{
		e=c-1-a;
		f=60+d-b;
	}
	cout<<e<<" "<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
