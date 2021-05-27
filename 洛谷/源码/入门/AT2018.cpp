#include <bits/stdc++.h>

using namespace std;



int main()
{
	string a;
	cin>>a;
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i]=='B'&&i!=0){
			a.erase(i-1, 2);
		}
		if(a[i]=='B'&&i==0){
			a.erase(0, 1);
		}
	}
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i]=='B'&&i!=0){
			a.erase(i-1, 2);
		}
		if(a[i]=='B'&&i==0){
			a.erase(0, 1);
		}
	}
	for (int i = 0; i < a.size(); ++i)
	{
		cout<<a[i];
	}
	return 0;
}