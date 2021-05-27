#include <bits/stdc++.h>

using namespace std;



int main()
{
	int n,a,b, t = 0;
	int unhappy = 0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		t += a+b -8;
		unhappy +=t;
	}
	cout<<unhappy;
	return 0;
}