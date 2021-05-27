#include <bits/stdc++.h>

using namespace std;



int main()
{
	string a;
	cin>>a;
	bool B = 0, N = 0, S = 0;
	if(a.size()>=6){
		for (int i = 0; i < a.size(); ++i)
		{
			if(a[i]>='A'&&a[i]<='Z'){
				B = 1;
			}
			if(a[i]>='a'&&a[i]<='z'){
				S = 1;
			}
			if(a[i]>='0'&&a[i]<='9'){
				N = 1;
			}
		}
		if(B&&S&&N){
			cout<<"yes";
			return 0;
		}
	}
	cout<<"no";
	return 0;
}