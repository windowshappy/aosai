#include <bits/stdc++.h>

using namespace std;
int l[2000001];
int main()
{
	int n,m, t;
	cin>>n>>m;
	
	
	for (int i = 0; i < m; ++i)
	{
		cin>>l[i];
	}

	sort(l, l+m);

	for (int i = 0; i < m; ++i)
	{
		cout<<l[i]<<" ";
	}
	return 0;
}