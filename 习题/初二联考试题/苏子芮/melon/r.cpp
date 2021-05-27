#include<bits/stdc++.h>

using namespace std;

int t[1111] = {0};

int main(){
	int n,tmp,max = -11;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;t[tmp]++;
	}
	for(int i=1;i<=131;i++){
		t[i+1] += t[i]/2;
	}
	for(int i=131;i>=0;i--){
	    if(t[i]){
	        cout<<i;
	        break;
	    }
	}
	return 0;
}
