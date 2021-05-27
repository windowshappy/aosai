#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,e,f,n;
	cin>>a>>b>>c>>d;
	n=60*c+d-60*a-b;
	e=n/60;
	f=n%60;
	cout<<e<<" "<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
