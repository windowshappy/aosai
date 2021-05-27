#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
	freopen("score.in", "r", stdin);
	freopen("score.out", "w", stdout);
	int a,b,c;
	cin>>a>>b>>c;
	double f = (a*0.2+b*0.3+c*0.5);
	printf("%.0lf", f);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
