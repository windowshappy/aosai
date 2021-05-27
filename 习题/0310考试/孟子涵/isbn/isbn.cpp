#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a,b,c,x,s[11],n=0;
	char m,o;
	cin>>a>>m>>b>>m>>c>>m>>o;
	x=o;
	if(x=='X'){
		x=10;
	}else{
		x-='0';
	}
	s[0]=a;s[1]=b/100;s[2]=b/10%10;s[3]=b%10;s[4]=c/10000;s[5]=c/1000%10;s[6]=c/100%10;s[7]=c/10%10;s[8]=c%10;
	for(int i=0;i<=8;i++){
		n+=s[i]*(i+1);
	}
	n%=11;
	if(n==x){
		cout<<"Right";
	}else{
		cout<<a<<m<<b<<m<<c<<m;
		if(n==10){
			cout<<'X';
		}else{
			cout<<n;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
