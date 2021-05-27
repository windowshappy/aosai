#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	double n,a1,a2,b1,b2,c1,c2,k,s1,s2,s3,x,y,z;
	cin>>n;
	cin>>a1>>a2;
	cin>>b1>>b2;
	cin>>c1>>c2;
	x=ceil(n/a1);
	y=ceil(n/b1);
	z=ceil(n/c1);
	s1=x*a2;
	s2=y*b2;
	s3=z*c2;
	if(s1>s2)
		k=s2;
	else
		k=s1;
	if(k>s3)
		k=s3;
	cout<<k;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
