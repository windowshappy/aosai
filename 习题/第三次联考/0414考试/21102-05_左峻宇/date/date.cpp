#include<iostream>
#include<cstdio>
using namespace std;

int t1,t2,n,y,r,ans;


bool hw(int x){
	int s=0;
	int j=x;
	
	while(j!=0){
		s=s*10+j%10;
		j/=10;
	}
	
	if(s==x){
		return 1;
	}
	
	return 0;
}

bool rp(int x){
	if(x%400==0 or (x%4==0 and x%100!=0)){
		return 1;
	}
	return 0;
}

int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	
	cin>>t1>>t2;
	
	for(int i=t1;i<=t2;i++){
		n=i/10000;
		y=i%10000/100;
		r=i%100;
		
		if(y==12 and r==32){
			i+=8869;
		}
		else if((y==1 or y==3 or y==5 or y==7 or y==8 or y==10) and r==32){
			i+=69;
		}
		else if((y==4 or y==6 or y==9 or y==11) and r==31){
			i+=70;
		}
		else if(rp(n) and r==30 and y==2){
			i+=71;
		}
		else if(!rp(n) and r==29 and y==2){
			i+=72;
		}
				
		if(hw(i)){
			ans++;
		}
	}
	
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
