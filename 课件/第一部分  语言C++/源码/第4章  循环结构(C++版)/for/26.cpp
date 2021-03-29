#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int a,b,n=1;
	cin >> a>>b;
	for(int i=0;i<b;i++){
		n*=a;
		n = n%1000;
	}
	printf("%3d", n);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

