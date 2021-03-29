#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("sulkiness.in", "r", stdin);
	freopen("sulkiness.out", "w", stdout);
	int a,b,t;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		t=a+b;
		if(t>8){
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
