#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int n,m, unMask = 0;
	cin>>n>>m;
	// bool l[n+1][n+1];
	// memset(l, 0, sizeof(l));
	// for (int x = 0; x < n/m; ++x)
	// {
		
	// 		for (int j = 0; j < m; ++j)
	// 		{
	// 			for (int i = m*x; i < n; ++i)
	// 			{
	// 				if(i>=n||j>=n) break;
	// 				l[i][j] = true;
	// 			}
	// 		}
	// }
	// for (int i = 0; i < n%m; ++i)
	// {
	// 	for (int j = 0; j < n/m; ++j)
	// 	{
	// 		for (int x = j*m; x < m; ++x)
	// 		{
	// 			if(i>=n||j>=n||x>=n) break;
	// 			l[x][i + n/m*m] = true;

	// 		}
	// 	}
	// }

	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		if(!l[i][j]){
	// 			unMask++;
	// 		}
	// 	}
	// }
	// cout<<unMask;
	cout<<(n%m)*(n%m);
	return 0;
}