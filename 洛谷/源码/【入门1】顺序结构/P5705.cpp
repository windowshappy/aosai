#include<iostream>

using namespace std;

int main(){
	double a,f,ans,c,d,e;
	int b;
	cin>>a;
	b=a;
	c = b%10;
	d = (b/10)%10;
	e = b/100;
	f = a-b;
	ans = f*10+c/10+d/100+e/1000;
	cout<<ans;
	return 0;
}
