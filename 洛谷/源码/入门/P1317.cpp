#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b, n = 0, l = 0, ans=0;
	cin>>n>>a;
	for(int i=1;i<n;i++){
		cin>>b;
		if(b<a) l=1;
		if(b>a&&l){
			l=0;
			ans ++; 
		}
		a=b;
	}
	cout<<ans;
} 
