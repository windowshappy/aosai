#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b=-5,t=1,max=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a-1==b) t++;
		else t=1;
		if(max<t) max=t;
		b=a;
		
	}
	cout<<max;
	return 0;
}
