#include <iostream>
#include <cstdio>
using namespace std;
bool f[10001];int l, ans;
int main()
{
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	cin >> l;
	for(int i = 1;i <= 2;i++)
	{
		int x, y;cin >> x >> y;
		for(int j = x;j <= y;j++) f[j] = 1;
	}
	for(int i = 0;i <= l;i++) 
		if(!f[i]) ans++;
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
