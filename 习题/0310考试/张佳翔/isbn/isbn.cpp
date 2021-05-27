#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string s;int ans;
int main()
{
	freopen("isbn.in", "r", stdin);
	freopen("isbn.out", "w", stdout);
	cin >> s;
	for(int i = 0, j = 1;i < s.length() - 2;i++)
		if(s[i] >= '0' && s[i] <= '9')
			ans += j * (s[i] - '0'), j++;
	ans %= 11;
	if(ans != 10)
		if(s[s.length() - 1] - '0' == ans)
			cout << "Right";
		else
		{
			s[s.length() - 1] = ans + '0';
			cout << s;
		}
	else
		if(s[s.length() - 1] == 'X')
			cout << "Right";
		else
		{
			s[s.length() - 1] = 'X';
			cout << s;
		}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
