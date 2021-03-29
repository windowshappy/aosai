#include<iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
using namespace std;

double Distance(double x1,double y1, double x2, double y2){
	return sqrt(abs((x1 - x2) * (x1 - x2)) + abs((y1 - y2) * (y1 - y2)));
}

int main(){
	double x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double a,b,c;
	a = Distance(x1,y1,x2,y2);
	b = Distance(x1,y1,x3,y3);
	c = Distance(x2,y2,x3,y3);
	double aaa = (a+b+c);
	printf("%.2lf", aaa);
}
