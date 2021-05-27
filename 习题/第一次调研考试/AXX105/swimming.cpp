#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=c-a;
	f=d-b;
	if(f<0)
	{
		f=f+60;
		e--;
	}
	cout<<e<<" "<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
