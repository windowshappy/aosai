#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	int s=(c-a)*60+(d-b);
	e=s/60;
	f=s%60;
	cout<<e<<" "<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
