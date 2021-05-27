#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	freopen("coin.in", "r", stdin);
	freopen("coin.out", "w", stdout);
	int c=0,k, t = 0;
	cin>>k;
	for(int i=1;;i++){
		for(int j=0;j<i;j++){
			t++;
			c+=i;
			if(t>=k){
				cout<<c;
				return 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
