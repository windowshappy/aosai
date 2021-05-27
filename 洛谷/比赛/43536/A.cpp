#include <bits/stdc++.h>

using namespace std;



int main()
{
	int n,x,d,fc = 0;
	cin>>n>>x;
	for (int i = 0; i < n; ++i)
	{
		cin>>d;
		if(d<=x) fc++;
	}
	if(fc>=30) cout<<"YES!";
	else cout<<"NO!!!";
	return 0;
}
