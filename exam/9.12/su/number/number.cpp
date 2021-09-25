#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("number.in", "r", stdin);
	freopen("number.out", "w", stdout);
	int ans = 0;
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if(a[i] == '1'){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
