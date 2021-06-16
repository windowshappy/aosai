#include<iostream>

using namespace std;

int main(){
	int h[7],s,m;
	for(int i=1;i<=7;i++){
		cin>>s>>m;
		h[i] = s+m;
	}
	for(int i=1;i<=7;i++){
		if(h[i]>8){
			cout<<i;
			return 0;
		}
	}
	cout<<0; 
	return 0;
}
