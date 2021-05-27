#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.in","w",stdout);
	long long a,b;
	cin>>a>>b;
	int c,d;
	if(a>=1&&a<=9)c=a;
	else if(a>=10&&a<=99)c=a%10+a/10;
	else if(a>=100&&a<=999)c=a%10+a/10%10+a/100;
	else if(a>=1000&&a<=9999)c=a%10+a/10%10+a/100%10+a/1000;
	else if(a>=10000&&a<=99999)c=a%10+a/10%10+a/100%10+a/1000%10+a/10000;
	else if(a>=100000&&a<=999999)c=a%10+a/10%10+a/100%10+a/1000%10+a/10000%10+a/100000;
	else if(a>=1000000&&a<=9999999)c=a%10+a/10%10+a/100%10+a/1000%10+a/10000%10+a/100000%10+a/1000000;
	else if(a==100000000)c=1;	
	else c=a%10+a/10%10+a/100%10+a/1000%10+a/10000%10+a/100000%10+a/1000000%10+a/10000000%10;
	if(b>=1&&b<=9)d=b;
	else if(b>=10&&b<=99)d=b%10+b/10;
	else if(b>=100&&b<=999)d=b%10+b/10%10+b/100;
	else if(a>=1000&&a<=9999)d=b%10+b/10%10+b/100%10+b/1000;
	else if(a>=10000&&a<=99999)d=b%10+b/10%10+b/100%10+b/1000%10+b/10000;
	else if(a>=100000&&a<=999999)d=b%10+b/10%10+b/100%10+b/1000%10+b/10000%10+b/100000;
	else if(a>=1000000&&a<=9999999)d=b%10+b/10%10+b/100%10+b/1000%10+b/10000%10+b/100000%10+b/1000000;
	else if(a==100000000)d=1;	
	else d=b%10+b/10%10+b/100%10+b/1000%10+b/10000%10+b/100000%10+b/1000000%10+b/10000000%10;
	cout<<c*d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
