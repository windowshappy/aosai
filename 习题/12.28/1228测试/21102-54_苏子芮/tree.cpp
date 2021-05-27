#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,tree[20000],a,b;
	cin>>l;
	l++;
	for(int i=1;i<=l;i++) tree[i]=1;
	for(int i=1;i<=2;i++){
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			tree[j]=0;
		}
	}
	int ans=0;
	for(int i=1;i<=l;i++){
		if(tree[i]==1) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
