#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int n,day=0;
	long long ans=0;
	cin>>n;
	for(int i=1;;i++) {
		for(int j=1;j<=i;j++) {
			ans+=i;
			day++;
			if(day==n) {
				cout<<ans;
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
