#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	freopen("reverse.in", "r", stdin);	
	freopen("reverse.out", "w", stdout);
	int n,a,b,c,d;
	cin>>n;
	a=n/1000;
	b = n/100%10;
	c = n/10%10;
	d = n%10;
	cout<<d*1000+c*100+b*10+a;
	fclose(stdin);	
	fclose(stdout);
	return 0;	
	
}
