#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	double t;
	cin>>a;
	t=a;
	for(int i=0;;i++){
		a-=floor(t/2);
		t=a;
		if(a==1){
			cout<<i+1;
			break;
		}
	}
	return 0;
} 
