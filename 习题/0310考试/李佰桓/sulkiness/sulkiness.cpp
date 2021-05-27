#include<iostream>
#include<cstdio>
using namespace std;
int a,b,maxx,ans;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		if(a+b>8&&a+b>maxx){
			maxx=a+b;
			ans=i;
		}
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
