#include<iostream>
#include<cstdio>
using namespace std;
int s[1000][1000],t[1000][1000];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n;
	cin>>n;
	memset(s,0,sizeof(s));
	int a,b,g,k;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>g>>k;
		for(int j=a;j<=g;j++){
			for(int l=b;l<=k;l++){
				s[j][l]=1;t[j][l]=i;
			}
		}
	}
	int x,y;
	cin>>x>>y;
	if(s[x][y]==1){
		cout<<t[x][y];
	}else{
		cout<<-1;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
//四维 提高组第一题 
