#include<bits/stdc++.h>
using namespace std;

string sa, sb;
int a, b, ans;

int main() {
	freopen ("cowmult.in", "r", stdin);
	freopen ("cowmult.out", "w", stdout);
	
	cin>>sa>>sb;
	
	for(int i = 1; i <= sa.size(); i++) {
		for(int j = 1; j <= sb.size(); j++) {
			a = sa[i - 1] - '0';
			b = sb[j - 1] - '0';
			
			ans += a * b;
		}
	}
	
	cout<<ans<<endl;
	
	fclose (stdin);
	fclose (stdout);
	
	return 0;
}
