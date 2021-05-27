#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,flag,x,y,l[1001], t[1001];
	cin>>n>>m;
	memset(t, 0, sizeof(t));
	for (int i = 1; i <= n; ++i)
	{
		cin>>l[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cin>>flag>>x>>y;
		if (flag==0)
		{
			int ttt = -1;
			for (int j = x; j <= y; ++j)
			{
				t[++ttt] = l[j];
			}
			sort(t, t+ttt+1);
			int tt = 1, maxn = -190, num = -10;
			for (int j = 0; j <= ttt; ++j)
			{
				if(t[j] == t[j+1]) tt++;
				else {
					if(maxn<tt){
						maxn=tt;
						num = t[j];
					}
					tt = 1;
				}
			}
			cout<<num<<endl;
			memset(t, 0, sizeof(t));
		}
		else
		{
			l[x] = y;
		}
	}
	return 0;
}