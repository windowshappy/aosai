#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	string a;
	cin>>num>>a;
	for(int i=0;i<a.size();i++){
		if((int)a[i]+num>'z'){
			a[i] = char(int(a[i])+num-26);
		}else{
			a[i] = char(int(a[i])+num);
		}
	}
	cout<<a;
	return 0;
}

