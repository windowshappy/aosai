#include<iostream>
#include<cstdio>
using namespace std;
int n,m,ans,x,c[15][5],y;
bool a[15][15];
inline void dfs(int x){
	if(x==n+1){
		ans+=1;
		return ;
	}
	for(register int col=1;col<=4;col++){
		if(c[x][col]) continue;
		for(register int i=1;i<=n;i++) if(a[x][i]) c[i][col]+=1;
		dfs(x+1);
		for(register int i=1;i<=n;i++) if(a[x][i]) c[i][col]-=1;
	}
} 
int main(){
	freopen("colour.in","r",stdin);
	freopen("colour.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(register int i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		a[x][y]=a[y][x]=1;
	}
	dfs(1);
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
