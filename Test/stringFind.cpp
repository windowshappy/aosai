#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a("fgfdff fff fdfgg dgd dgdgsdfsffd");
	string::size_type p = a.find("fff");
	if(a.find("fff")==string::npos){
		cout<<1;
	}
	else{
		cout<<a.find("fff");
	}
	return 0;
}