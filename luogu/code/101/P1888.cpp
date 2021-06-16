#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a,long long b){
	if(b==0)return a;
	return gcd(b,a%b);
} 
int main(){
	long long a,b,c,z;
	cin>>a>>b>>c;

	long long x = (c>=(a>=b?a:b)?c:(a>=b?a:b));
	long long m = (c<=(a<=b?a:b)?c:(a<=b?a:b));
	cout<<m/gcd(x,m)<<"/"<<x/gcd(x,m);
	return 0;
}
