#include <iostream>
#include <cstdio>
using namespace std;
int j, m, a, t, ans;bool f;
int main()
{
	freopen("save.in", "r", stdin);
	freopen("save.out", "w", stdout);
	for(int i = 1;i <= 12;i++)
	{
		cin >> a;j += 300;
		if(j < a) 
		{
			f = 1;ans = i;break;
		}
		while(j - 100 >= a)
			j -= 100, m += 100;
		j -= a;
	}
	if(f) cout << -ans;
	else cout << j + m * 1.0 * 1.2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
