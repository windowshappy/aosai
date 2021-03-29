#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int s,e,f,a,b,c,d;
	cin>>a>>b>>c>>d;
	s=c*60+d-a*60-b;
	e=s/60;
	f=s%60;
	cout<<e<<" "<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
