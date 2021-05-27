#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int hui1(int n){
	int fi=n;
	int hui[8];
	int tt=0;
	int re=0;
	while(n!=0){
		int ge=n%10;
		hui[tt]=ge;tt++;
		n/=10;
	}
	for (int i=0;i<8;++i){
		re+=hui[i]*pow(10,7-i);
	}
	if(re==fi) return 1;
	else return 0;
}
int run(int n){
	if((n%4==0&&n%100!=0)||(n%400==0)){
		return 1;
	}
	else return 0;
}
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
    int date[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int date1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int a1,a2;
	int t1=a1,t2=a2;
	int ok=0;
	cin>>a1>>a2;
	int c1=7,c2=7;
	int start[8],end[8];
	int summ=0;
	while(a1!=0){
		int ge=a1%10;
		start[c1]=ge;c1-=1;
		a1/=10;
	}
	while(a2!=0){
		int ge1=a2%10;
		end[c2]=ge1;c2-=1;
		a2/=10;
	}
	if(t1==t2){
		if(hui1(t1)==1) cout<<2;
		else cout<<0;
		return 0;
	}
	int sy=start[0]*1000+start[1]*100+start[2]*10+start[3];
	int ey=end[0]*1000+end[1]*100+end[2]*10+end[3];
	int oo;
	for (int i=sy;i<=ey;++i){
		if(run(i)==1) oo=1;
		else oo=0;
		int test=i;
		int year[4];
		int ci=3;
		while(test!=0){
			int sg=test%10;
			year[ci]=sg;ci-=1;
			test/=10;
		}
		ok=year[0]*10000000+year[1]*1000000+year[2]*100000+year[3]*10000+year[3]*1000+year[2]*100+year[1]*10+year[0];
		int mmm=year[3]*10+year[2];
		int ddd=year[1]*10+year[0];
		if(mmm<=12){
			if(oo==0&&ddd<=date[mmm]) summ+=1;
			if(oo==1&&ddd<=date1[mmm]) summ+=1;
		}
	}
	cout<<summ;
	fclose(stdin);fclose(stdout);
	return 0;
}
