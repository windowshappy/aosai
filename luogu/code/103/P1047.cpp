#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t[10001],l,m,u,v;
	cin>>l>>m;
	for(int i=0;i<=10001;i++) t[i] = 1;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		for(int j=u;j<=v;j++) t[j] = 0;
	}
	int ans = 0;
	for(int i=0;i<=l;i++){
		if(t[i]==1) ans++;
	}
	cout<<ans;
	return 0;
	
}
 
