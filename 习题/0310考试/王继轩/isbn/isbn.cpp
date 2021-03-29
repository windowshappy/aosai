#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.cot","w",stdout);
	
	int q2,w3,e4,r5,t6,y7,u8,i9,o0,p1;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	q2=a;
	
	w3=b/100; e4=(b/10)%10; r5=b%10;
	
	t6=c/10000; y7=(c/1000)%10; u8=(c/100)%10; i9=(c/10)%10; o0=c%10;
	
	int s=q2*1+w3*2+e4*3+r5*4+t6*5+y7*6+u8*7+i9*8+o0*9;
	int m=s%11;
	if(m==d) cout<<"Right";
	else{cout<<a<<b<<c; cout<<m;}
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
