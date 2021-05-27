#include<iostream>

using namespace std;

int main(){
	int a,b,c,max=-200,min=200;
	cin>>a>>b>>c;
	for(int i=0;i<3;i++){
		if(a>max) max=a;
		else if(b>max) max=b;
		else if(c>max) max=c;
		if(min>a) min=a;
		else if(min>b) min=b;
		else if(min>c) min=c;
	}
	if(max==a&&min==b)cout<<min<<" "<<c<<" "<<max;
	else if(max==a&&min==c)cout<<min<<" "<<b<<" "<<max;
	else if(max==b&&min==c)cout<<min<<" "<<a<<" "<<max;
	else if(max==b&&min==a)cout<<min<<" "<<c<<" "<<max;
	else if(max==c&&min==a)cout<<min<<" "<<b<<" "<<max;
	else if(max==c&&min==b)cout<<min<<" "<<a<<" "<<max;
	return 0;
}
