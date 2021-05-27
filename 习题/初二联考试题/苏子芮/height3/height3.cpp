#include<bits/stdc++.h>

using namespace std;
int t[1000010];
int main(){
	freopen("height3.in", "r", stdin);
	freopen("height3.out", "w", stdout);
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	cin>>k;
	for(int i=0;i<n;i++){
		if(t[i]!=k) cout<<t[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
