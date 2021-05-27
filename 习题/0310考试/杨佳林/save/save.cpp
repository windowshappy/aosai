#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int xian=0,ma=0,yong;
	for(int i=1;i<=12;i++){
		cin>>yong;
		xian=xian+300;
		xian=xian-yong;
		if(xian<0){
			cout<<"-"<<i;
			return 0;
		}
		if(xian>=100){
			ma=ma+(xian/100*100);
			xian=xian-(xian/100*100);
		}
		
	}
	cout<<ma*20/100+xian+ma;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
