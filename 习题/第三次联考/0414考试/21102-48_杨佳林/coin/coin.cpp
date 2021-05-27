#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,sum=0;
	cin>>k;
	for(int i=1;;i++){
		for(int j=1;j<=i;j++){
			k--;
			sum=sum+i;
			if(k==0){
				cout<<sum;
				return 0;
			}	
		}
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
