#include <iostream>
#include <cstdio>
using namespace std;
int w[10];int a, b, ans, maxn;
int main()
{
	freopen("sulkiness.in", "r", stdin);
	freopen("sulkiness.out", "w", stdout);
	for(int i = 1;i <= 7;i++)
	{
		cin >> a >> b;
		if(a + b > 8) 
			w[i] = a + b, w[i + 1] = a + b;
	}
	for(int i = 1;i <= 7;i++)
		if(w[i] > maxn) 
			maxn = w[i], ans = i;
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
