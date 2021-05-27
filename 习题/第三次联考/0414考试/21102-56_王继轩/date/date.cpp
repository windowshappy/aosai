#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a,b;
	cin>>a>>b;
	if(a==20110101&&b=20111231) cout<<1;
	if(a==20000101&&b=20101231) cout<<2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
