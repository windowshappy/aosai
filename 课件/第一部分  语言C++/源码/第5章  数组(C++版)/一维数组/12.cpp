#include<iostream>
#include<cstdio>

using namespace std;

int main(){
//	freopen("12.in", "r", stdin);
//	freopen("12.out", "w", stdout);
	
	int n,t,l[100],max=-1000001;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t>max) max = t;
		l[i] = t;
	}
	for(int i=0;i<n;i++){
		if(max==l[i]) l[i] = 0;
	}
	t=0;
	for(int i=0;i<n;i++){
		t+=l[i];
	}
	cout<<t;
	
	return 0;
}

