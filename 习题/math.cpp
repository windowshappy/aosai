#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	// freopen("math.in","r",stdin);
	// freopen("math.out","w",stdout);
	int n,a,max=0,min=2342342;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(max<a) max=a;
		if(min>a) min=a;
	}
	cout<<max-min;
	return 0;
}

