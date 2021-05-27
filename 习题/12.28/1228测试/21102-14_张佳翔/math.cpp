#include <iostream>
#include <cstdio>
using namespace std;
long long fact(long long n)
{
	int ret = 1;
	for(int i = 1;i <= n;i++) ret *= i;
	return ret;
}
int x, ans = 0;
int main()
{
	freopen("math.in", "r", stdin);
	freopen("math.out", "w", stdout);
	cin >> x;
	for(int i = 1;i <= x;i++)
		ans += fact(i);
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
