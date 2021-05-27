#include<iostream>
#include<cstdio>
using namespace std;
int a,b,ans;
int x[3],y[3],z[3];
bool cm[4];
int f[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
bool cmp1(int x1){
	if(x1%100!=0&&x1%4==0)return 1;
	else if(x1%400==0)return 1;
	return 0;
}
int cmp(int x1,int y1){
	if(x1==2){
		if(cmp1(y1))return 29;
		return 28;
	}
	else return f[x1];
}
bool cmp2(int x1){
	int y1=0,z1=x1;
	while(z1){
		y1=z1%10+y1*10;
		z1/=10;
	}
	if(y1==x1)return 1;
	return 0;
}
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>a>>b;
	z[1]=a%100;
	a/=100;
	y[1]=a%100;
	a/=100;
	x[1]=a;
	
	z[2]=b%100;
	b/=100;
	y[2]=b%100;
	b/=100;
	x[2]=b;
	for(int i=x[1];i<=9999;i++){
		if(i==x[2])cm[1]=1;
		for(int j=y[1];j<=12;j++){
			if(cm[1]&&j==y[2])cm[2]=1;
			for(int k=z[1];k<=cmp(j,i);k++){
				int num=i*10000+j*100+k;
				if(cmp2(num))ans++;
				if(cm[1]&&cm[2]&&k==z[2]){
					cm[3]=1;
					break;
				}
			}
			z[1]=1;
			if(cm[2]&&cm[3])break;
		}
		if(cm[1]&&cm[2]&&cm[3])break;
		y[1]=1;
		cm[1]=0;
		cm[2]=0;
		cm[3]=0;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
