#include<iostream>
#include<cstdio>
using namespace std;
int l,x1,y1,x2,y2,ans;
int tree[10001];
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	
	cin>>l;
	cin>>x1>>y1>>x2>>y2;
	for(int i=x1;i<=y1;i++)
		tree[i]=1;
	for(int i=x2;i<=y2;i++)
		tree[i]=1;
	for(int i=0;i<=l;i++)
		if(tree[i]==0)ans++;
	cout<<ans;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
