#include <bits/stdc++.h>

using namespace std;

struct node
{
	int befor;
	int afte;
	int a;
	node()
	{
		befor = afte = 0;
	}
} worker[100001];

map<pair<int, int>, short> vis;

inline bool findWorker(int x, int L)
{
	if (vis[make_pair(x, L)] > 0)
		return bool(vis[make_pair(x, L)] - 1);
	if (x == 1 && L == 1)
		return 0;
	if (L == 1)
	{
		if (worker[worker[x].befor].a == 1 || worker[worker[x].afte].a == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (findWorker(worker[x].befor, L - 1))
		{
			vis[make_pair(x, L)] = 2;
			return 1;
		}

		else if (findWorker(worker[x].afte, L - 1))
		{
			vis[make_pair(x, L)] = 2;
			return 1;
		}

		vis[make_pair(x, L)] = 1;
		return 0;
	}
}

int main()
{
	freopen("work.in", "r", stdin);
	freopen("work.out", "w", stdout);

	int n, x, y;
	register int m, q;
	cin >> n >> m >> q;
	for (int i = 1; i <= n; i++)
	{
		worker[i].a = i;
	}
	while (m--)
	{
		scanf("%d%d", &x, &y);
		if (worker[x].befor == 0)
		{
			worker[x].befor = y;
		}
		else
		{
			worker[x].afte = y;
		}
		if (worker[y].befor == 0)
		{
			worker[y].befor = x;
		}
		else
		{
			worker[y].afte = x;
		}
	}
	while (q--)
	{
		scanf("%d%d", &x, &y);
		if (x == 1 && y == 1)
		{
			cout << "No";
		}
		else if (y == 1)
		{
			if (worker[worker[x].befor].a == 1 || worker[worker[x].afte].a == 1)
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
		}
		else
		{
			if (findWorker(x, y))
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
		}
		cout << endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
