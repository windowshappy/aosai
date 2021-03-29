#include<iostream>
#include<cstdio>
using namespace std;
int money,ans,a;
int main(){
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	for(int i=1;i<=12;i++){
		money+=300;
		cin>>a;
		money-=a;
		if(money<0){
			cout<<-i;
			return 0;
		}
		ans+=money/100*100;
		money%=100;
	}
	cout<<ans*1.2+money;
	fclose(stdin);
	fclose(stdout);
}
