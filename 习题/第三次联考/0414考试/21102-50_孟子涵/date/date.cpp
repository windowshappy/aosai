#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int b,x[10],t,s=0,m,n2,n;
	cin>>n>>b;
	while(1){
		t=0;
		n2=n;
		for(int j=1;j<=8;j++){
			x[j]=n2%10;
			n2/=10;
		}
		for(int j=1;j<=4;j++){
			if(x[j]==x[9-j]) t++;
		}
		if(t==4) s++;
		n++;
		if(n==b+1) break;
		if(n%10000/100==1||n%10000/100==3||n%10000/100==5||n%10000/100==7||n%10000/100==8||n%10000/100==10||n%10000/100==12) m=31;
		if(n%10000/100==4||n%10000/100==6||n%10000/100==9||n%10000/100==11) m=30;
		if(n%10000/100==2) m=28;
		if(n/10000%4==0&&n/10000%100!=0||n/10000%400==0){
			if(m==28) m++;
		}
		if(n%100>m){
			n+=100;
			n-=m;
		}
		if(n%10000/100>12){
			n+=10000;
			n-=1200;
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
}
