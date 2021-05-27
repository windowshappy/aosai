#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,s=0,d=0;
	cin>>k;
	for(int i=1;i<=k;i++){
		d+=i;
		if(d>k){
			s+=i*(i-d+k);
			break;
		}else
		s+=i*i;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
}
