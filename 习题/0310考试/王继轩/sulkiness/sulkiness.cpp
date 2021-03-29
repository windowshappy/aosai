#include<iostream>
using namespace std;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.cot","w",stdout);
	int a,b,s;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		if((a+b)>8) {cout<<i; return 0;
		}
		
	}   cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
