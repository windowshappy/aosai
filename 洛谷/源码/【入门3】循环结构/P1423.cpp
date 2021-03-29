#include<bits/stdc++.h>
using namespace std;
int main(){
	double m=2;
	double n,t=0;
	cin>>n;
	for(int i=1;;i++){
		t+=m;
		if(n<=t){
			cout<<i;
			break;
		}
		m*=0.98;
	}
	
	return 0;
}
