#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int j=0,a,m=0;
	for(int i=1;i<=12;i++){
		cin>>a;
		j+=300;
		j-=a;
		if(j<0){
			cout<<-i;
			return 0;
		}
		a=j/100;
		a*=100;
		j%=100;
		m+=a;
	}
	cout<<m*1.2+j;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
