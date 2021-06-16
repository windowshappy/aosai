#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	double a,b,c;
	double s,p;
	cin>>a>>b>>c;
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1lf",s);
	return 0;
}
