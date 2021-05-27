#include <bits/stdc++.h>

using namespace std;

bool p(string a, string b){
	return a+b>b+a;
}

int main()
{
	int n;
	string a[30], b;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a, a+n, p);

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i];
	}
	return 0;
}