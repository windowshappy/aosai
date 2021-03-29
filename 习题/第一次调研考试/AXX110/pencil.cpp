#include<iostream>
#include<cstdio>
using namespace std;
int n,x,y,ans1,ans=200000000;
int main(){
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=3;i++){
		cin>>x>>y;
		ans1=n/x;
		if(n%x!=0) ans1++;
		ans=min(ans,ans1*y);
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
