#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
string s;bool f;
int main()
{
	freopen("reverse.in", "r", stdin);
	freopen("reverse.out", "w", stdout);
	cin >> s;
	if(s[0] == '-')
	{
		s.erase(0, 1);f = 1;
	}
	reverse(s.begin(), s.end());
	while(s[0] == '0') s.erase(0, 1);
	if(f) cout << "-";
	cout << s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
