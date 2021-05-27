#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	int n,a,b,x,m=10000000;
	cin>>n;
	for(int i=1;i<=3;i++)
	{
		cin>>a>>b;
		double y=n*1.0/a;
		x=ceil(y)*b;
		if(x<m) m=x;
	}
	cout<<m;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
