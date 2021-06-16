#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin>>x;
	int w=x;
	int n=0;
	while(w!=0){
		n = n*10+w%10;
		w/=10;
	}
	cout<<n;
	return 0;
}
