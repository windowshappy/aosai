#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,k1=0,k2=0,uk1=0,uk2=0;
	cin>>n>>k;
	if(n>0)
	for(int i=1;i<=n;i++){
		if(i%k==0) {
			k1+=i;
			k2++;
		}
		else{
			uk1+=i;
			uk2++;
		}
	}
	else
	for(int i=1;i>=n;i--){
		if(i%k==0) {
			k1+=i;
			k2++;
		}
		else{
			uk1+=i;
			uk2++;
		}
	}
	printf("%.1lf %.1lf",1.0*k1/k2,1.0*uk1/uk2);
	return 0;
} 
