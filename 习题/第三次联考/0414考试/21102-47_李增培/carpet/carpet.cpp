#include<bits/stdc++.h>
using namespace std;
int n;
int a,b,g,k;
int z[10000][10000];
int x,y;
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int c=1;c<=n;c++){
		cin>>a>>b>>g>>k;
		for(int i=a;i<=g;i++){
			for(int j=b;j<=k;j++){
				z[i][j]=c;
			}
		} 
	}
	cin>>x>>y;
	if(z[x][y]!=0) cout<<z[x][y];
	else cout<<-1;
	fclose(stdin);
	fclose(stdout);
	return 0;
	}
