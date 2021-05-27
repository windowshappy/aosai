#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	
	string s;
	cin>>s;
	if(s[0]=='-')
	{
		cout<<'-';
	}
	
	int si=s.size()-1;
	
	for(int i=si;i>=0;i--)
	{
		if(s[i]!='0' and s[i]!='-')
		{
			cout<<s[i];
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
