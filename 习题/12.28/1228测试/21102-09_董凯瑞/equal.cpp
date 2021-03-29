#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
string a ;
int val1, val2, val3 ;
char c ;
int main()
{
	freopen("equal.in", "r", stdin) ;
	freopen("equal.out", "w", stdout) ;
	cin >> a ;
	int len = a.size() ;
	int i = 0 ;
	for(; i < len ; ++i)
	{
		if(a[i] >= '0' && a[i] <= '9')
			val1 = val1*10 + a[i] - '0' ;
		if(a[i] == '+' || a[i] == '-')
		{
			c = a[i] ;
			++i ;
			break ;
		}
	}
	for(; i < len ; ++i)
	{
		if(a[i] >= '0' && a[i] <= '9')
			val2 = val2*10 + a[i] - '0' ;
		if(a[i] == '=')
		{
			++i ;
			break ;
		}
	}	
	for(; i < len ; ++i)
	{
		if(a[i] >= '0' && a[i] <= '9')
			val3 = val3*10 + a[i] - '0' ;
	}
	if(val1 && val2)
	{
		if(c == '+')
			cout << val1 + val2 ;
		if(c == '-')
			cout << val1 - val2 ;
	}
	if(val1 && val3)
	{
		if(c == '+')
			cout << val3 - val1 ;
		if(c == '-')
			cout << val1 - val3 ;
	}
	if(val2 && val3)
	{
		if(c == '+')
			cout << val3 - val2 ;
		if(c == '-')
			cout << val2 + val3 ;
	}
	fclose(stdin) ;
	fclose(stdout) ;
	return 0 ;
}
