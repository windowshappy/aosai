#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
	freopen ("date.in","r",stdin);
	freopen ("date.out","w",stdout);
	
	int lr,ll;
	int i,j;
	int nianfen;
	int yuefen,riqi;
	int ans = 0;
	int a1,b1,c1,d1,d2,c2,b2,a2;
	
	scanf ("%d%d",&lr,&ll);
	
	for (i = lr; i <= ll; i++)
	{
		a1 = i / 10000000,a2 = i % 10;
		b1 = i / 1000000 % 10,b2 = i / 10 % 10;
		c1 = i / 100000 % 10,c2 = i / 100 % 10;
		d1 = i / 10000 % 10,d2 = i / 1000 % 10; 
		
		nianfen = a1*1000+b1*100+c1*10+d1;
		yuefen = d2*10+c2;
		riqi = b2*10+a2;
	
		if (yuefen > 12 or riqi > 31 or yuefen == 0 or riqi == 0)
		{
			continue;
		}
	
		if (nianfen % 4 == 0 and nianfen % 100 != 0 or nianfen % 400 == 0)
		{
			if (((yuefen == 1 or yuefen == 3 or yuefen == 5 or yuefen == 7 or yuefen == 8 or yuefen == 10 or yuefen == 12) and riqi > 31) or
				((yuefen == 4 or yuefen == 6 or yuefen == 9 or yuefen == 11) and riqi > 30) or
				(yuefen == 2 and riqi > 29))
			{
				continue;
			}
		}
		else
		{
			if (((yuefen == 1 or yuefen == 3 or yuefen == 5 or yuefen == 7 or yuefen == 8 or yuefen == 10 or yuefen == 12) and riqi > 31) or
				((yuefen == 4 or yuefen == 6 or yuefen == 9 or yuefen == 11) and riqi > 30) or
				(yuefen == 2 and riqi > 28))
			{
				continue;
			}
		}
		
		if (a1 == a2 and b1 == b2 and c1 == c2 and d1 == d2)
		{
			ans ++;
		}
	}

	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
