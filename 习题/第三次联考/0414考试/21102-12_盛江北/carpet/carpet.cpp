#include<bits/stdc++.h>
using namespace std;

int n, a[10005], b[10005], g[10005], k[10005];
int x, y, ans;

int main() {
	freopen ("carpet.in", "r", stdin);
	freopen ("carpet.out", "w", stdout);
	
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	
	
	for(int i = 1; i <= n; i++) {
		if(a[i] <= x and b[i] <= y and a[i] + g[i] >= x and b[i] + k[i] >=y) {
			ans = i;
		}
	}
	if(ans == 0) {
		ans = -1;
	}
	cout<<ans<<endl;

	fclose (stdin);
	fclose (stdout);
	
	return 0;
}
