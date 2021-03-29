#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	//freopen("pencil.in","r",stdin);
	//freopen("pencil.out","w",stdout); 
	double n,a,b,c,d,e,f;
	int x,y,z,s1,s2,s3,min;
	cin>>n;
	cin>>a>>b>>c>>d>>e>>f;
	x=ceil(n/a);
	y=ceil(n/c);
	z=ceil(n/e);
	s1=x*b;
	s2=y*d;
	s3=z*f;
	  min=s1;
	if (s2<=min)
	  min=s2;
	if (s3<=min)
	  min=s3;
	cout<<min;
	return 0;
}
