#include<bits/stdc++.h>
using namespace std;

int sa, sb, ans;
int ye, mo, da;

struct dd {
	int y, m, d;
};

dd a, b;

int main() {
	freopen("date.in", "r", stdin);
	freopen("date.out", "w", stdout);
	cin>>sa>>sb;
	
	a.y = sa / 10000;
	a.m = (sa % 10000 - sa % 100) / 100;
	a.d = sa % 100;
	
	b.y = sb / 10000;
	b.m = (sb % 10000 - sb % 100) / 100;
	b.d = sb % 100;
	
	ye = a.y;
	while(1)
	{
		mo = ye % 10 * 10 + (ye % 100 - ye % 10) / 10;
		da = (ye % 1000 - ye % 100) / 10 + (ye - ye % 1000) / 1000;
		
		if(mo > 12 or da > 31 or mo == 0 or da == 0)
		{
			ye++;
			if(ye > b.y)
			{
				break;
			}
			continue;
		}
		
		if(ye > a.y and ye < b.y)
		{
			ans++;
		}
		else
		{
			if((ye == b.y and mo < b.m) or (ye == a.y and mo > a.m))
			{
				ans++;
			}
			else
			{
				if((mo == b.m and ye == b.y and da <= b.d) or (mo == a.m and ye == a.y and da >= a.d))
				{
					ans++;
				}
			}
		}
		
		ye++;
		if(ye > b.y)
		{
			break;
		}
	}
	
	cout<<ans<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
