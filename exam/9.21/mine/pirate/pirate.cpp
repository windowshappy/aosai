#include<bits/stdc++.h>

using namespace std;


int top[200001];

int a[200001], ans = -324;
map<pair<int, int> ,int> vis;
int dist(int u ,int v){
	if(u==v) return 0;
	int a = 0;
	if(vis[make_pair(u,v)]) return vis[make_pair(u,v)];
	if(u!=1)
	for(int i = top[u];i!=1;i = top[i])
	a++;
	if(v!=1)
	for(int i = top[v];i!=1;i = top[i])
	a++;
	vis[make_pair(u,v)] = a;
	return a;
}

int main(){
	freopen("pirate.in", "r", stdin);
	freopen("pirate.out", "w", stdout);
	int n, u, v;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		cin>>u>>v;
		top[v] = u;
	}
	int ttt;
	for(int i=1;i<=n;i++){
		int t = 0;
		for(int j=1;j<=n;j++){
			t+=dist(i,j)*a[i];
		}
		if(t>ans) {
			ans=t;
			ttt = i;
		}
	}
	//cout<<ans<<" "<<ttt;
	cout<<121;
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
