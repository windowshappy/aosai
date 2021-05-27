#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
    int n,a,b,c,d,z;
    cin>>n;
    a=(n%1000)/1000;
    b=(n%100)/100;
    c=(n%100)/10;
    d=n/1000;
    z=a*1000+b*100+c*10+d;
    cout<<z;
	fclose(stdin); fclose(stdout);
	return 0;
} 
