#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,e,f,a1,a2,s;
	cin>>a>>b>>c>>d;
	a1=a*60+b;
	a2=c*60+d;
	s=a2-a1;
	e=s/60;
	f=s%60;
	cout<<e<<" "<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
