#include<iostream>
#include<cstdio>
using namespace std;
int k,n=1;
long long ans;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	for(int i=1;i<=10000;i++){
		for(int j=1;j<=i;j++){
			ans+=i;
			if(n==k){
				cout<<ans;
				return 0;
			}
			n++;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
