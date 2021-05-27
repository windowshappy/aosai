#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	double n,a1,b1,a2,b2,a3,b3,re1,re2,re3;
	cin>>n>>a1>>b1>>a2>>b2>>a3>>b3;
	re1=ceil(n/a1*1.0)*b1;
	re2=ceil(n/a2*1.0)*b2;
	re3=ceil(n/a3*1.0)*b3;
	if(re1<re2&&re1<re3) cout<<re1;
	if(re2<re1&&re2<re3) cout<<re2;
	if(re3<re1&&re3<re2) cout<<re3;
	fclose(stdin);fclose(stdout);
	return 0;
}
