#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("date.in","r",stdin);
	freopen("date.in","w",stdout);
	int a,b;
	cin>>a>>b;
	if(a==b){
		if(a/10000==a%10*1000+a/10%10*100+a/100%10*10+a/1000%10*10)
		cout<<1;
		else 
		cout<<0;		
	}
	else
	cout<<2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
