#include <iostream>
#include <cstdio>
using namespace std;
struct dt
{
	int a, b, g, k, ans;
}m[10001];
int n, x, y;bool f;
int main()
{
	freopen("carpet.in", "r", stdin);
	freopen("carpet.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;++i)
	{
		cin >> m[i].a >> m[i].b >> m[i].g >> m[i].k;m[i].ans = i;
	}
	cin >> x >> y;
	for(int i = n;i > 0;--i)
		if(x >= m[i].a && x < m[i].a + m[i].g && y >= m[i].b && y < m[i].b + m[i].k)
		{
			f = 1;cout << m[i].ans;break;
		}
	if(!f) cout << -1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
