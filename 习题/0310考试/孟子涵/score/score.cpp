#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int n;
	double a,b,c;
	cin>>a>>b>>c;
	a*=0.2;
	b*=0.3;
	c*=0.5;
	n=a+b+c;
	cout<<n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
