#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int n,q,b,s,g;cin>>n;
	q=n/1000;
	b=(n-q*1000)/100;
	s=n/10%10;
	g=n%10;
	cout<<g*1000+s*100+b*10+q;
	fclose(stdin);fclose(stdout);
	return 0;
}
