#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n;
	double a,b,temp;
	cin>>a>>b>>n;
	temp=a/b;
	for(int i=0;i<n;i++){
		temp*=10;
	}
	cout<<(int)temp%10;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

