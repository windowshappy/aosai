#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int list[100];
	int n,a,b=0,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		list[i] = a;
	}
	cin>>m;
	for(int i=0;i<n;i++){
		if(list[i]==m){
			b++;
		}
	}
	cout<<b;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

