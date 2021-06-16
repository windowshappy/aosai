#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int a1=1,b1=1;
	cin>>a>>b;
	for(int i=0;i<a.size();i++) a1*=(int(a[i])-64);
	for(int i=0;i<b.size();i++) b1*=(int(b[i])-64);
	if(a1%47==b1%47) cout<<"GO";
	else cout<<"STAY";
	return 0;
}

