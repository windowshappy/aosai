#include <iostream>
#include <cstdio>
using namespace std;
long long n, ans, num, mon;
int main()
{
	freopen("pencil.in", "r", stdin);
	freopen("pencil.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= 3;i++)
	{
		long long nmon = 0, nnum = 0;
		cin >> num >> mon;
		while(nnum < n)
		{
			nmon += mon;
			nnum += num;
		}
		if(nmon < ans || i == 1) ans = nmon;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
