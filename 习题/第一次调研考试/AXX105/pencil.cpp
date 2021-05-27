#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	double n,a,b,c,x,y,z,o,p,q,s;
	cin>>n>>a>>x>>b>>y>>c>>z;
	o=ceil(n/a)*x;
	p=ceil(n/b)*y;
	q=ceil(n/c)*z;
	if(o<p&&o<q) s=o;
	if(p<o&&p<q) s=p;
	if(q<o&&q<p) s=q;
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
