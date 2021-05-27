#include <bits/stdc++.h>
using namespace std ;
int n , sum = 1 ;
int main()
{
	freopen("triangle.in", "r", stdin) ;
	freopen("triangle.out", "w", stdout) ;
	cin >> n ;
	for(int i = 1 ; i <= n ; ++i)
	{
		for(int j = 1 ; j <= i ; ++j)
		{
			cout << sum ; 
			++sum ;
			if(sum == 10)
				sum = 0 ;
		}
		cout << endl ;
	}
		
	fclose(stdin) ;
	fclose(stdout) ;
	return 0 ;
}
