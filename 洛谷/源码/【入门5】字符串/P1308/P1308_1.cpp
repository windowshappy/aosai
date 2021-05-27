#include <bits/stdc++.h>

using namespace std;

char t(char a){
	if(a>='A'&&a<='Z'){
		a+=' ';
	}
}

string tolower(string a){
	for (int i = 0; i < a.size(); ++i)
	{
		a[i] = t(a[i]);
	}
	return a;
}

int main()
{
	int ans = 0,f;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	a = tolower(a);
	b = tolower(b);
	a = " " + a + " ";
	b = " " + b + " ";
	if (b.find(a)!=string::npos)
	{

		f = b.find(a);
		int t = f;
		ans++;
		while(b.find(a, t+1)!=string::npos){
			ans++;
			t = b.find(a,t+1);
		}
		cout<<ans<<" "<<f;
	}
	else{
		cout<<-1;
	}
	return 0;
}