#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,a[1000],b[1000],ab=0,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin >>t;
		a[i]=t;
	}
	for(int i=0;i<n;i++){
		cin >>t;
		b[i]=t;
	}
	for(int i=0;i<n;i++){
		ab+=a[i]*b[i];
	}
	cout<<ab;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

