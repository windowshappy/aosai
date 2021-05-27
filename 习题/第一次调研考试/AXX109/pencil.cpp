#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	int n,a1,a2,b1,b2,c1,c2,q1,q2,q3,sum=0;
	cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
	
	if(n%a1==0) q1=n/a1*a2;
	else q1=(n/a1+1)*a2;
	
	if(n%b1==0) q2=n/b1*b2;
	else q2=(n/b1+1)*b2;
	
	if(n%c1==0) q3=n/c1*c2;
	else q3=(n/c1+1)*c2;
	
	if(q1<q2&&q1<q3) cout<<q1;
	else if(q2<q1&&q2<q3) cout<<q2;
	else cout<<q3;
	fclose(stdin); fclose(stdout);
	return 0;
}

