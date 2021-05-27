#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	long long n;cin>>n;
    long long ans=0,i=1;
	for(;;i++){
		for(int j=1;j<=i;j++){
			n--;
			ans+=i;
		if(n==0){
			cout<<ans;
			return 0;
		}
		}
		
	}
	fclose(stdin);fclose(stdout);
	return 0;
}

