#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("save.in", "r", stdin);
	freopen("save.out", "w", stdout);
	int y,yuan=0,c=0, t;
	for(int i=1;i<=12;i++){
		yuan+=300;
		cin>>y;
		if(yuan>=y){
			yuan-=y;
			if(yuan>=100){
				t = yuan/100*100;
				c+= t;
				yuan -= t;
			}
		}else{
			cout<<-i;
			return 0;
		}
	}
	cout<<yuan+c*1.2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
