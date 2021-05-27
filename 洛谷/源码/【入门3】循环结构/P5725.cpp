#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t=1;
	cin>>n;
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			if(t<10) cout<<0;
			cout<<t;
			t++;
		}
		cout<<endl;
	}
	cout<<endl;
	t=1;
	for(int i=1;i<=n;i++){
		for(int a=1;a<=2*(n-i);a++) cout<<" ";
		for(int j=1;j<=i;j++){
			
			
			if(t<10) cout<<0;
			cout<<t;
			t++;
		}
		cout<<endl;
	}
	return 0;
}
