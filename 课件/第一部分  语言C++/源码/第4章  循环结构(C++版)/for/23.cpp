#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,appleNum=0,temp=0;
	cin>>n;
	for(int i=0;i<n;i++){
		appleNum+=i+1;
	}
	cout<<appleNum;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

