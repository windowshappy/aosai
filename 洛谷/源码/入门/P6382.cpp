#include <bits/stdc++.h>

using namespace std;

/*
日期  	星期一	星期二	  星期三   	星期四  	星期五
限行尾号	11 和 99	22 和 88	 33 和 77  4 和 66	   55 和  00
*/

int main()
{
	string b;
	cin>>b;
	if(b[0]!='M'||b[1]!='D'||b[2]!='A'){
		cout<<"1 1 1 1 1";
	}
	else{
		int a=-110, t=7;
		while(a==-110){
			if(b[t]>='0'&&b[t]<='9'){
				a = b[t]-'0';
			}
			t--;
		}
		if(a==1||a==9)
			cout<<"1 0 0 0 0";
		if(a==2||a==8)
			cout<<"0 1 0 0 0";
		if(a==3||a==7)
			cout<<"0 0 1 0 0";
		if(a==4||a==6)
			cout<<"0 0 0 1 0";
		if(a==5||a==0)
			cout<<"0 0 0 0 1";
	}
	return 0;
}