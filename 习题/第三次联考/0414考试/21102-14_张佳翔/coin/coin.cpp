#include <iostream>
#include <cstdio>
using namespace std;
long long n, k, c, ans;bool f;
int main()
{
	freopen("coin.in", "r", stdin);
	freopen("coin.out", "w", stdout);
	cin >> k;
	for(int i = 1;;++i)
	{
		for(int j = 1;j <= i;++j)
		{
			ans += i;++c;
			if(c == k)
			{
				f = 1;break;
			}
		}
		if(f) break;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
