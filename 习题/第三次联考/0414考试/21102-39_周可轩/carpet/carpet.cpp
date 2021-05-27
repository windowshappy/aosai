#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int a,b,g,k,ans=0;
	int n;cin>>n;
	int xy[4][n];
	for (int i=0;i<4;++i){
		for (int j=0;j<n;++j) xy[i][j]=0;
	}
	for (int i=0;i<n;++i){
		cin>>a>>b>>g>>k;
		xy[i][0]=a;xy[i][1]=b;
		xy[i][2]=a+g;xy[i][3]=b+k;
	}
	int rx,ry;cin>>rx>>ry;
	for (int i=0;i<n;++i){
		if(rx>=xy[i][0]&&rx<=xy[i][2]&&ry>=xy[i][1]&&ry<=xy[i][3]){
			ans=i;
		}
	}
	if(ans==0) cout<<-1;
	else{
		ans+=1;
		cout<<ans;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
