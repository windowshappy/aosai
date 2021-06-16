#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b, l=0, m=-100;
	cin>>n>>a;
	for(int i=1;i<n;i++){
		cin>>b;
		if(b>a){
			l++;
		}
		else{
			l=0;
		}
		if(l>m) m=l;
		a=b;
	}
	cout<<m+1;
} 
