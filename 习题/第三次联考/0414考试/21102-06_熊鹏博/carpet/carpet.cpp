#include <cstdio>
#include <iostream>
using namespace std;

int a[110],b[110],g[110],k[110];
int i,j,n,x,y,flag = 0;

int main ()
{
	freopen ("carpet.in","r",stdin);
	freopen ("carpet.out","w",stdout);

	scanf ("%d",&n);
	for (i = 1; i <= n; i++)
	{
		scanf ("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
	}
	scanf ("%d%d",&x,&y);
	
	for (i = n; i >= 1; i--)
	{
		if (a[i] <= x and a[i] + g[i] >= x and b[i] <= y and b[i] + k[i] >= y)
		{
			cout << n;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "-1";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
