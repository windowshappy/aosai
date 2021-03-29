#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int s,h,l[7];
	for(int i=1;i<=7;i++){
		cin>>s>>h;
		l[i]=s+h;
	}
	for(int i=1;i<=7;i++){
		if(l[i]>8){
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

