#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,p=-1;
	double t;
	cin>>n;
	for(int i=2;i<=n;i++){
//		t=1.0*n/i;
//		if(t-floor(t)==0){
//			if(prime(i)){
//				if(p<i) p=i;
//			}
//		}
		if(n%i==0) {
			cout<<n/i;
			break ;
		}
	}
	return 0;
}
