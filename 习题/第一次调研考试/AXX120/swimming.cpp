#include <iostream>
#include <cstdio>
using namespace std;
int ha, ma, hb, mb, ansh, ansm;
int main()
{
	freopen("swimming.in", "r", stdin);
	freopen("swimming.out", "w", stdout);
	cin >> ha >> ma >> hb >> mb;
	while(ha != hb || ma != mb)
	{
		ma++;ansm++;
		if(ma == 60)
		{
			ma = 0;ha++;
		}
		if(ansm == 60)
		{
			ansm = 0;ansh++;
		}
	}
	cout << ansh << " " << ansm;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
