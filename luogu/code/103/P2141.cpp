#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,l[101],temp[101],t=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		l[i] = a;
		temp[i] = a;
	}
	a=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==i) continue;
			t=l[i]+l[j];
			for(int x=1;x<=n;x++){
				if(t==temp[x]){
					a++;
					
					temp[x] = 0;
				} 
			}
		}
	}
	cout<<a;
	return 0;
} 
