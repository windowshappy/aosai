#include <bits/stdc++.h>

using namespace std;


int main()
{
	int w,k,a,n,m = 0;
	cin>>w>>k>>a>>n;
	for (int i = 1; i <= k && i<=n; ++i)
	{
		m+=w;
		w+=a;
	}
	if(k<=n){
		m+=w*(n-k);
	}

	cout<<m;
	return 0;
}