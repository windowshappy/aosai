#include <iostream>
#include <cstdio>
using namespace std;
int a, b, n[101], m[101];long long ans;
int f(int i, int* r)
{
	int c = 0;
	while(i != 0)
	{
		r[c++] = i % 10;i /=10;
	}
	return c;
}
int main()
{
	freopen("cowmult.in", "r", stdin);
	freopen("cowmult.out", "w", stdout);
	cin >> a >> b;
	int x = f(a, n);int y = f(b, m);
	for(int i = 0;i < x;++i)
		for(int j = 0;j < y;++j)
			ans += n[i] * m[j];
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
