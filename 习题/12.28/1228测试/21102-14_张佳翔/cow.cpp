#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
long long n, x, ans = 1;
int main()
{
	freopen("cow.in", "r", stdin);
	freopen("cow.out", "w", stdout);
	cin >> x >> n;
	cout << (long long)pow(x + 1, n);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
