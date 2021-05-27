#include <cstdio>
#include <iostream>
using namespace std;
int k,day = 1,yd = 1,ans = 0;
int main ()
{
	freopen ("coin.in","r",stdin);
	freopen ("coin.out","w",stdout);

	cin >> k;
	while (k != 0)
	{
		ans += yd;
		if (day == yd)
		{
			day = 0;
			yd ++;
		}
		k--;
		day ++;
	}
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
