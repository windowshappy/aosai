#include<iostream>
#include<cstdio>
using namespace std;
int a,b,c,d;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>a;
	for (int i=1;i<=a;i++)
	{
		for (int j=1;j<=i;j++)
		{
			b=b+i;
			c++;
			if (c==a)
			{
				d=1;
				break;
			}
		}
		if (d==1)
		break;
	}
	cout<<b;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
