#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	double n,a1,b1,c1,a2,b2,c2,s1,s2,s3,min=1000000;
	cin>>n;
	cin>>a1>>a2;
	cin>>b1>>b2;
	cin>>c1>>c2;
	s1=ceil(n/a1)*a2;
	s2=ceil(n/b1)*b2;
	s3=ceil(n/c1)*c2;
	if(s1<min){
		min=s1;
	}
	if(s2<min){
		min=s2;
	}
	if(s3<min){
		min=s3;
	}
	cout<<min;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
