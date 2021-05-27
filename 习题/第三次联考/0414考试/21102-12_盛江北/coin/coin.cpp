#include<bits/stdc++.h>
using namespace std;

int k;
int m = 1;
long long ans;

int main() {
	freopen ("coin.in", "r", stdin);
	freopen ("coin.out", "w", stdout);
	
	cin>>k;
	for(int i = 1, j = 1; i <= k; i++, j++)	{
		ans += m;
		if(m == j)
		{
			j = 0;
			m++;
		}
	}
	
	cout<<ans<<endl;
	
	fclose (stdin);
	fclose (stdout);
	
	return 0;
}
