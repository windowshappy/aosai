#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string a,b;
int n1,n2,y1,y2,r1,r2,t=1000,ans;
int v[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void in(){
	for(int i=0;i<4;i++){
		n1+=(a[i]-'0')*t;
		n2+=(b[i]-'0')*t;
		t/=10;
	}
	t=10;
	for(int i=4;i<6;i++){
		y1+=(a[i]-'0')*t;
		y2+=(b[i]-'0')*t;
		r1+=(a[i+2]-'0')*t;
		r2+=(b[i+2]-'0')*t;
		t/=10;
	}
}
void js(int x){
	if(x%100==0){
		if(x%400==0) v[2]=29;
		else v[2]=28; 
	}
	else if(x%4==0) v[2]=29;
	else v[2]=28;
}
int pp(int x,int y,int z){
	if(x/1000!=z%10||x/100%10!=z/10||x/10%10!=y%10||x%10!=y/10)
		return 0;
	else return 1;
}
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	
	cin>>a>>b;
	in();
	for(int i=n1;i<=n2;i++){
		int x=1,y=12;
		if(i==n1) x=y1;
		if(i==n2) y=y2; 
		for(int j=x;j<=y;j++){
			js(i);
			int z=1,c=v[j];
			if(i==n1&&j==y1) z=r1;
			if(i==n2&&j==y2) c=r2;
			for(int l=z;l<=c;l++){
				if(pp(i,j,l)==1) ans++;
			}
		}
	}
	cout<<ans;
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
