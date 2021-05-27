#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	double booklist[10] = {28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
	double m,yuan=0;
	for(int i=0;i<10;i++){
		cin>>m;
		booklist[i]*=m;
	}
	for(int j=0;j<10;j++){
		yuan += booklist[j];
	}
	printf("%.1lf",yuan);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

