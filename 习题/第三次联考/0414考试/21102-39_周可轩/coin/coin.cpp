#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int n,ans=0,c=1,flag=0,now=1;
	cin>>n;
	for (int i=1;i<=n;++i){
		flag++;
		ans+=c;
		if(flag==now){
			flag=0;
			now++;
			c++;
		}
	}
	cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}
