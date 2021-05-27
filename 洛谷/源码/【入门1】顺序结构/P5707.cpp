#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int s,v,m,h;
	cin>>s>>v;
	m = s/v;
	if(s%v!=0){
		m++;
	}
	m+=10;
	h = 7-m/60;
	if (h<0)
	{
		h+=24;
	}
	m%=60;
	m = 60-m;
	if(h<10){
		cout<<0<<h;
	}
	else{
		cout<<h;
	}
	cout<<":";
	if(m<10){
		cout<<0<<m;
	}
	else{
		cout<<m;
	}
	return 0;
}