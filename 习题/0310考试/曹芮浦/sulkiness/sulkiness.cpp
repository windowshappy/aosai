#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a1,a2,a3,a4,a5,a6,a7;
	int b1,b2,b3,b4,b5,b6,b7;
	char sum;
	cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
	cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;
	if(a1+a2<=8&&(a3+a4<=8&&(a5+a6<=8&&(a7+b1<=8&&(b2+b3<=8&&(b4+b5<=8&&(b6+b7<=8)))))))
	cout<<"0";
	else{
		if(a3+a4>a1+a2)cout<<"2";
		else if(a5+a6>a3+a4)cout<<"3";
		else if(a7+b1>a5+a6)cout<<"4";
		else if(b2+b3>a7+b1)cout<<"5";
		else if(b4+b5>b2+b3)cout<<"6";
		else if(b6+b7>b4+b5)cout<<"7";
		else cout<<"1";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
	}
	
	
