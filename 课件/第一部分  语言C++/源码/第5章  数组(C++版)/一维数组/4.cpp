#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n;
	int list[100];
	int t;
	cin>>n;
	for(int i=n;i>0;i--){
		cin>>t;
		list[i-1] = t;
	}
	for(int j=0;j<n;j++){
		cout<<list[j]<<" ";
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

