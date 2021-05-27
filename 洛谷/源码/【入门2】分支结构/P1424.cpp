#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	int n,x,t,c=0;
	cin>>x>>n;
	t=x;
	for(int i=0;i<n;i++){
		if(t==6||t==7);
		else c++;
		if(t==7) t=0;
		t++;
	}
	cout<<c*250;
	return 0;
}
