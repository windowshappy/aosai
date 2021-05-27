#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int x,bai=0,t=0;
	for(int i=1;i<=12;i++){
		cin>>x;
		t=t+300;
		if(t-x<100){
			t=t-x;
		}else{
			t=t-x;
			bai=bai+t/100;
			t=t%100;
		}
		if(t<0){
			cout<<-i;
			return 0;
		}
	}
	cout<<t+bai*120;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
