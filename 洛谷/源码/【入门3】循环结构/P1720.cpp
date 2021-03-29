#include<bits/stdc++.h>
using namespace std;

int main(){
	double f,n;
	cin>>n;
	f = (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
	printf("%.2lf", f);
	return 0;
}
