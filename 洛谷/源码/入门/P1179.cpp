#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b, n = 0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		int t = i, t1;
		while(t!=0){
			t1 = t%10;
			if(t1 == 2) n++;
			t/=10;
		}
	}
	cout<<n;
} 
