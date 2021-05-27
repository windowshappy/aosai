#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m, a[21], max = -22,min = 222222, maxn = -9;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		max = -22;
		min = 3333;
		for (int j = 0; j < m; ++j)
		{
			cin>>a[j];
			if(max<a[j]) max = a[j];
			if(min>a[j]) min = a[j];
		}
		int t =0;
		for (int j = 0; j < m; ++j)
		{
			t+=a[j];
		}
		t-=max;
		t-=min;
		if(maxn<t) maxn=t;
	}
	printf("%.2lf\n", 1.0 * maxn / (m-2));
	return 0;
}