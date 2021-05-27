#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n;
	double a=0,qi=2,pi=1;
	cin>>n;
	for(int i=0;i<n;i++){
		a+=qi/pi;
		qi++;pi++;
	}
	printf("%.4lf",a);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

