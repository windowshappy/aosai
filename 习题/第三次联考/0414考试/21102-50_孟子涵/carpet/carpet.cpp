#include<iostream>
#include<cstdio>
using namespace std;
int f[10000][10000];
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,a,b,g,k,x,y;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>g>>k;
		for(int j=b;j<=b+k;j++){
			for(int o=a;o<=a+g;o++){
				f[o][j]=i;
			}
		}
	}
	cin>>x>>y;
	if(f[x][y]==0) cout<<-1;
	else cout<<f[x][y];
	fclose(stdin);
	fclose(stdout);
}
