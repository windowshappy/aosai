#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i] -= ' ';
		}
	}
	cout<<a;
}

