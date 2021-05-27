#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,max=0,c,d=0;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		if(a+b>8){
			c=a+b;
			if(c>max){
				max=c;
				d=i;
			}
		}
	}
	cout<<d;
	fclose(stdin);fclose(stdout);
	return 0;
}
