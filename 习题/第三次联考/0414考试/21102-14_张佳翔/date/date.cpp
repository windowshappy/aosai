#include <iostream>
#include <cstdio>
using namespace std;
int p, q, ds[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, ans;
struct dt
{
	int y, m, d;
}a, b;
void cpy(dt& x, int i)
{
	x.d = i % 100;i /= 100;
	x.m = i % 100;i /= 100;
	x.y = i;
}
void add(dt& x)
{
	if((x.y % 4 == 0 && x.y % 100) || x.y % 400 == 0) ds[2] = 29;
	else ds[2] = 28;
	if(x.d == ds[x.m])
	{
		if(x.m == 12)
		{
			++x.y;x.m = x.d = 1;
		}
		else
		{
			++x.m;x.d = 1;
		}
	}
	else ++x.d;
}
bool ishw(dt x)
{
	if(x.y % 10 != x.m / 10) return 0;
	x.y /= 10;
	if(x.y % 10 != x.m % 10) return 0;
	x.y /= 10;
	if(x.y % 10 != x.d / 10) return 0;
	x.y /= 10;
	if(x.y != x.d % 10) return 0;
	return 1;
}
int main()
{
	freopen("date.in", "r", stdin);
	freopen("date.out", "w", stdout);
	cin >> p >> q;
	cpy(a, p);cpy(b, q);
	if(p == q)
	{
		if(ishw(a)) cout << 1;
		else cout << 0;
	}
	else
	{
		for(;a.y != b.y || a.m != b.m || a.d != b.d;add(a))
			if(ishw(a)) ++ans;
		cout << ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
