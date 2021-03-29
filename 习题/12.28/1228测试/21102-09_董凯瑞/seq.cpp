#include <bits/stdc++.h>
#define MAXN 2020
using namespace std ;
int n , ans ; 
int a[MAXN] , sum[MAXN] ;
int main()
{
	freopen("seq.in", "r", stdin) ;
	freopen("seq.out", "w", stdout) ;
	cin >> n ;
	for(int i = 1 ; i <= n ; ++i)
	{
		cin >> a[i] ;
		++sum[ a[i] ] ;
	}
		
	for(int i = 1 ; i < n ; ++i)
	{
		if(abs(a[i] - a[i + 1]) == 1)
			ans += sum[ a[i] ] ;
	}
	cout << ans ; 
	fclose(stdin) ;
	fclose(stdout) ;
	return 0 ;
}
