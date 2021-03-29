#include<iostream>
#include<cstdio>
using namespace std;
int a,z,c;
double ma;
int main(){
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	
	for(int i=1;i<=12;i++){
		cin>>a;
		c=z+300-a;
		if(c<0) {
			cout<<-i;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
		ma=ma+(c/100*100);
		z=c%100;
	}
	cout<<ma*1.2+z;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
