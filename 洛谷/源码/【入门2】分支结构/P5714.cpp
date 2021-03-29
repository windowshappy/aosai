#include<iostream>

using namespace std;

int main(){
	double m,h,bim;
	cin>>m>>h;
	bim = m/(h*h);
	if(bim<18.5) cout<<"Underweight";
	else if(bim>=18.5&&bim<24) cout<<"Normal";
	else{
		cout<<bim<<endl<<"Overweight";
	}
	return 0;
}
