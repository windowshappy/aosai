#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("save.in","r",stdin);
	freopen("save.cot","w",stdout);
	int a,b,s=0,m=0,n;
	for(int i=1;i<=12;i++){
		cin>>a;
		s+=300;
		s=s-a;
		if(s<0) {cout<<0-i; return 0;
		}
		b=s/100;
		s=s-b*100;
		m=m+b*100;
		
	}   m=m*1.2;
	s=s+m;
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
