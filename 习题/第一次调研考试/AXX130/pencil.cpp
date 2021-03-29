#include<iostream>
#include<cstdio>
using namespace std;
int main()
{   
    freopen("pencil.in","r",stdin);
    freopen("pencil.out","w",stdout);
	int n,a,a1,b,b1,c,c1,o,p,q;
	cin>>n>>a>>a1>>b>>b1>>c>>c1;
	o=(n/a+1)*a1;
	p=(n/b+1)*b1;
	q=(n/c+1)*c1;
	if(o>p)
	o=p;
	if(o>q)
	o=q;
	cout<<o;
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
