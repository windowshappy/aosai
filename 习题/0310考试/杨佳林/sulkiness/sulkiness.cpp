#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,sum=0,f;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		if(a+b>8&&a+b>sum){
			sum=a+b;
			f=i;
 		}
		
	}
	if(sum==0)cout<<sum;
	else cout<<f;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
