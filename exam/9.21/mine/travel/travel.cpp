#include<bits/stdc++.h>

using namespace std;
struct city{
	int w,v, z;
	vector<city> nest;
}c[1011];

struct node{
	city c;
	int w,v;
};
int vvv[1011];
node make_node(city c,int w = 0,int v = 0){
	node t;
	t.c = c;
	t.w = w;
	t.v = v;
	return t;
}
int mW, mV;
void bfs(){
	int w,v;
	queue<node> Q;
	Q.push(make_node(c[1]));
	while(!Q.empty()){
		node n = Q.front();
		city t = n.c;
		Q.pop();
		if(t.nest.size() == 0){
			mW = max(mW, w);
			mV = max(mV, v);
			return;
		}
		for (int i=0;i<t.nest.size();i++){
			Q.push(make_node(t.nest[i], n.w));
			
		}
	}
}
bool cmp(int a, int b){
	return a>b;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int n,m, W,x,y,z;
	cin>>n>>m>>W;
	int flag = 0;
	for(int i==1;i<=n;i++){
		cin>>c[i].w>>c[i].v;
		vvv[i] = v;
	}
	for(int i=1;i<=m;i++){
		cin>>x>>y>>z;
		c[x].nest = *c[y];
		c[x].z = z;
	}
	sort(vvv+1, vvv+n+1, cmp);
	for(int i=0;i<W;i++){
		flag+=vvv[i];
	}
	cout<<flag<<0;
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
