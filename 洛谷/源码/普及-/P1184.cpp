#include <bits/stdc++.h>

using namespace std;
string a[21],b;
int main()
{
	int n,m,t = 0;
	
	cin>>n>>m;
	getline(cin, b);
	for (int i = 0; i < n; ++i)
	{
		getline(cin,a[i]);
	}

	for (int i = 0; i < m; ++i)
	{
		getline(cin,b);
		if(b[b.size()-1]!=13)b=b+(char)13;
		for(int j = 0; j < n; ++j)
		{
			if(b==a[j]){
				t++;
				break;
			}
		}
	}
	cout<<t<<endl;
	return 0;
}