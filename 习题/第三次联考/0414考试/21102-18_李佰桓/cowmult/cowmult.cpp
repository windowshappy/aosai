#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string a,b; 
long long ans;
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			ans+=(a[i]-'0')*(b[j]-'0');
		}
	}
	printf("%lld",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
