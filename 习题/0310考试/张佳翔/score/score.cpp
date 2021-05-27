#include <iostream>
#include <cstdio>
using namespace std;
double a, b, c;
int main()
{
	freopen("score.in", "r", stdin);
	freopen("score.out", "w", stdout);
	cin >> a >> b >> c;
	cout << a * 0.2 + b * 0.3 + c * 0.5;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
