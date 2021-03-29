#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int sumi=0,summ=0,mom=0,yu;
	for (int i=1;i<=12;++i){
		cin>>yu;
		summ+=300;
		summ-=yu;
		mom+=summ/100*100;
		summ=summ-summ/100*100;
		sumi+=summ;
		if(summ<0){
			cout<<-i;
			return 0;
		}
	}
	sumi+=mom*1.2;
	cout<<sumi;
	fclose(stdin);fclose(stdout);
	return 0;
}
