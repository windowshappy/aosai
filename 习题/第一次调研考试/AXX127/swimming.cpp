#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	if(b<=d) e=c-a;
	else e=c-a-1;
	if(b<=c) f=d-b;
	else f=60-b+d;
	cout<<e<<" "<<f;
	return 0;
}
