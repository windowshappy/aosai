#include<iostream>
#include<cstdio>
using namespace std;
double all;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	double a,b,c;
	cin>>a>>b>>c;
	all=0.2*a+0.3*b+0.5*c;
	cout<<int(all);
	fclose(stdin);
	fclose(stdout);
}
