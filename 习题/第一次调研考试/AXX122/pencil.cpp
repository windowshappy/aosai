#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	//freopen("pencil.in","r",stdin);
	//freopen("pencil.out","w",stdout);
	int n,a,b,c,d,e,f;
	cin>>n;
	cin>>a>>b;
	cin>>c>>d;
	cin>>e>>f;
	if((a*b>c*d)&&(a*b>e*f))
	{
		if(c*d>e*f) cout<<e*f<<endl;
		else cout<<c*d<<endl;
	}
	if((c*d>a*b)&&(c*d>e*f))
	{
		if(a*b>e*f) cout<<e*f<<endl;
		else cout<<a*b<<endl;
	}
	else((e*f>a*b)&&(e*f>c*d));
	{
		if(c*d>a*b) cout<<a*b<<endl;
		else cout<<c*d<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
