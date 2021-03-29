#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,max=-1,min=1111;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(max<a) max=a;
		if(min>a) min=a;
	}
	cout<<max-min;
	return 0;
}
