#include<iostream>
#include<cstdio>
using namespace std;
int x,y,a[9],c,d,m,s;
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>x>>y;
	for(x;x<=y;x++){
		if((x%4==0&&x%100!=0)||x%400==0){
			if(x%1000/100==2&&x%100==28){
				x+=100;
				x/=100*100;
			}
	    }
		for(int i=1;i<=8;i++){
		    a[i]=x%10;
		    x/=10;
    	}
		m=4;
		for(int i=1;i<=4;i++){
		    if(a[i]==a[9-i]){
			   m--;
		    } 
		    if(m==0){
			   s++;
		    }
	    }
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
