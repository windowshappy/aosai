#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	int n;
	int a1,a2,b1,b2,c1,c2;
	cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
	int a=ceil(n*1.0/a1)*a2;
	int b=ceil(n*1.0/b1)*b2;
	int c=ceil(n*1.0/c1)*c2;
	if(a<b&&a<c) cout<<a;
	if(b<a&&b<c) cout<<b;
	if(c<a&&c<b) cout<<c;
	fclose(stdin);fclose(stdout);
	return 0;
}
