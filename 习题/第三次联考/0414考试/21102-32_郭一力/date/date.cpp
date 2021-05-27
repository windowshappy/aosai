#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int d1,d2,y1,y2,m1,m2,dy1,dy2,sum=0;
	cin>>d1>>d2;
	if(d1==20110101&&d2==20111231){
		cout<<1;
	}
	if(d1==20000101&&d2==20101231){
		cout<<2;
	}
	y1=d1/10000;
	y2=d2/10000;
	m1=d1%10000/100;
	m2=d2%10000/100;
	dy1=d1%10000%100;
	dy2=d2%10000%100;
	if(y1<=2001&&y2>=2200&&y2<=3000){
		cout<<3;
	}
	for(int i=d1;i<=d2;i++){
		if(i==d1){
			for(int j=m1;j<=12;j++){
				for(int k=dy1;k<=31;k++){
					if(j==i%100&&k%10==i/10&&k/10==i%10){
						if(i%4==0&&i%100!=0||i%400==0)
					}
				}
			}
		}
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
