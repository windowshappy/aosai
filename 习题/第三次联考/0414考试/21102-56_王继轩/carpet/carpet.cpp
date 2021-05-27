#include<iostream>
#include<cstdio>
using namespace std;
int d[1000][6];
int main(){
freopen("carpet.in","r",stdin);
freopen("carpet.out","w",stdout);
	int n; cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<4;j++) cin>>d[i][j];
	int x,y;
	cin>>x>>y; int bi=0; 
	for(int i=n-1;i>=0;i--){
		if(x>=d[i][0]&&x<=d[i][2]&&y>=d[i][1]&&y<=d[i][3]) {
			cout<<i+1;
			bi++;
			break;
		}
	}
	if(bi==0) cout<<"-1";
fclose(stdin);
fclose(stdout);
	return 0;
} 
