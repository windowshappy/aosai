#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	int n,a,b,c,d,e,f,m;
	cin>>n;
	cin>>a>>b;
	cin>>c>>d;
	cin>>e>>f;
	m=n/a*b;
	if((b/a>d/c)&&(n/a!=0))
		m=(n/c+1)*d;
	else
		m=(n/c)*d;
	if((b/a>f/e)&&(n/e!=0))
		m=(n/e+1)*f;
	else
		m=n/e*f;
	if((d/c>f/e)&&(n/e!=0))
		m=(n/e+1)*f;
	else
		m=n/e*f;
	cout<<m;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
