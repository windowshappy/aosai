#include<iostream>
#include<cstdio>

using namespace std;


int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e = c-a;
	f = d-b;
	if(f<0){
		f = 60+f;
		e-=1;
	}
	cout<<e<<" "<<f;
	return 0;
}

