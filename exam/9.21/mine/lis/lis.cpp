#include<bits/stdc++.h>

using namespace std;
int a[1111];
int n, ans = 0;
int vis[1111];
inline void dfs(int x, int ind){
	if(ind>=n){
		ans = max(ans, x);
		return;
	}
	if(vis[ind]>=x) return;
	vis[ind] = x;
	for(int i=ind+1;i<=n;i++){
		if(a[ind]<a[i]) dfs(x+1, i);
	}
}

int main(){
	freopen("lis.in", "r", stdin);
	freopen("lis.out", "w", stdout);
	memset(vis, ~0x3f, sizeof(vis));
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0, 0);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
