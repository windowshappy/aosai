#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string.h>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int a,b,temp=0;
	string c;
	cin>>a>>b;
	temp = a;
	for(int i=1;i<b;i++){
		temp*=a;
		if(temp<7);
		else
		temp = temp%7;
	}
	switch(temp) {
		case 1:
			c = "Monday";
			break;
		case 2:
			c = "Tuesday";
			break;
		case 3:
			c = "Wednesday";
			break;
		case 4:
			c = "Thursday";
			break;
		case 5:
			c = "Friday";
			break;
		case 6:
			c = "Saturday";
			break;
		default:
			c = "Sunday";
			break;
	}
	cout<<c;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

