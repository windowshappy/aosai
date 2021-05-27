#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	double n,a1,a2,b1,b2,c1,c2,a3,b3,c3;
	cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
	a3=(ceil(n/a1))*a2;
	b3=(ceil(n/b1))*b2;
	c3=(ceil(n/c1))*c2;
	if((c3<a3)&&(c3<b3)) cout<<c3;
	else if((b3<a3)&&(b3<c3)) cout<<b3;
	else cout<<a3;
	return 0;
}
