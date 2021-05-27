#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int string2int(char s){
	int ans;
	ans = s-'0';
	return ans;
}
int main(){
	freopen("cowmult.in", "r", stdin);
	freopen("cowmult.out", "w", stdout);
	string a,b;
	int ans = 0,t1,t2;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		for(int j=0;j<b.length();j++){
			t1 = string2int(a[i]);
			t2 = string2int(b[j]);
			ans+=t1*t2;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
