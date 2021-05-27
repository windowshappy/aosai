#include<bits/stdc++.h>
using namespace std;
int k;
long long n;
int day,coin=1;//一个计数器，一个金币数 
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	for(int i=1;i<=k;i++){
		day++;
		n+=coin;
		if(day==coin){
			day=0;
			coin++;
		}
	}
	cout<<n;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
