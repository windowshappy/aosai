#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	int n;
	cin>>n;
	double x1,x2,x3;
	cin>>x1>>x2;
	double y1,y2,y3;
	cin>>y1>>y2;
	double z1,z2,z3;
	cin>>z1>>z2;
	double x,y,z;
	x=ceil(n/x1);
	y=ceil(n/y1);
	z=ceil(n/z1);
	x3=x*x2;
	y3=y*y2;
	z3=z*z2;
	if(x3<y3 && x3<z3) cout<<x3;
	else if(y3<x3 && y3<z3) cout<<y3;
	else if(z3<x3 && z3<y3) cout<<z3;
	fclose(stdin); fclose(stdout);
	return 0;
} 
