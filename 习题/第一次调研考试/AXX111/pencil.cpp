#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	int x,n,a1,b1,a2,b2,a3,b3,o1,o2,o3,s1,s2,s3;
	cin>>n>>a1>>b1>>a2>>b2>>a3>>b3;
	o1=ceil(n/(a1/1.0));
	o2=ceil(n/(a2/1.0));
	o3=ceil(n/(a3/1.0));
	s1=o1*b1;
	s2=o2*b2;
	s3=o3*b3;
	x=s1;
	if(s2<x)
	{
		x=s2;
	}
	if(s3<x)
	{
		x=s3;
	}
	cout<<x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
