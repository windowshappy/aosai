#include<bits/stdc++.h>

using namespace std;
int a[100004]; 
int main(){
	freopen("survey.in", "r", stdin);
	freopen("survey.out", "w", stdout);
	int n,m;
	cin>>n>>m; 
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a, a+m);
	for(int i=0;i<m;i++){
		cout<<a[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
