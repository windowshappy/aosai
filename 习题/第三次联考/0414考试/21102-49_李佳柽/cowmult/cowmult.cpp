#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("vowmult.out","w",stdout);
	string n,m;cin>>n>>m;
	
	long long ans=0;
	if(n<m) swap(n,m);
	for(long long i=0;i<n.size();i++){
		for(long long j=0;j<m.size();j++){
			ans=(n[i]-48)*(m[j]-48)+ans;
			
		}
	}
	cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}
