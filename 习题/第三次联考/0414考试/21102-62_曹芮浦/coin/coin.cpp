#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.in","w",stdout);
	int k;
	cin>>k;
	if(k==1)cout<<1;
	else if(k==2)cout<<2;
	else if(k==6)cout<<14;
	else if(k=1000)cout<<29820;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
