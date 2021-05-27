#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int n;
	int a1,a2,b1,b2,c1,c2;
	int a3,b3,c3;
	cin>>n;
	scanf("%d %d",&a1, &a2);
	scanf("%d %d",&b1, &b2);
	scanf("%d %d",&c1, &c2);
	if(a1==0)
		a1 =1;
	if(b1==0)
		b1 =1;
	if(c1==0)
		c1 =1;
	a3 = n%a1==0? n/a1:n/a1+1;
	b3 = n%b1==0? n/b1:n/b1+1;
	c3 = n%c1==0? n/c1:n/c1+1;
	a3*=a2;
	b3*=b2;
	c3*=c2;
	if(a3<b3&&a3<c3){
		cout<<a3;
	}else if(b3<a3&&b3<c3){
		cout<<b3;
	}else if(c3<b3&&c3<a3){
		cout<<c3;
	}else if(a3==b3&&a3==c3){
		cout<<a3;
	}
	return 0;
}
