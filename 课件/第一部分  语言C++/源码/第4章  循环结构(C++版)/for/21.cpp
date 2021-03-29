#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n;
	double a=1;
	cin>>n;
	for(double i=2;i<=n;i++){
		a-=1/i;
	}
	printf("%.4lf",a);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

