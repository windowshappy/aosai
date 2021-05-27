#include<iostream>

using namespace std;

int main(){
	unsigned long long n,p;
	//n*(n-1)/2*(n-2)/3*(n-3)/4
	cin>>n;
//	if(n==3){
//		cout<<0;
//		return 0;
//	}
//	int t=n;
//	d = (n-3)*2;
//	for(int i=3;t>=1;i++){
//		d+=t-i;
//		t-=i;
//	}
//	p=d*2-1;
	p=n*(n-1)/2*(n-2)/3*(n-3)/4;
	cout<<p;
	return 0;
}
