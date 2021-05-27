//chr:GB2312
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

long long a,b;
int i,q;
bool f;
string s;

int main()
{
	freopen("equal.in","r",stdin);
	freopen("equal.out","w",stdout);

	cin>>s;
	while(s[i]>='0'&&s[i]<='9'&&i<s.size())a=a*10+s[i++]-'0';
	if(s[i]=='?')q=1,++i;
	
	if(s[i++]=='+')f=1;
	
	while(s[i]>='0'&&s[i]<='9'&&i<s.size())b=b*10+s[i++]-'0';
	if(s[i]=='?')q=2,++i;
	
	if(q==0)
	{
		if(f)
		cout<<a+b;
		else
		cout<<a-b;
	}
	else if(q==1)
	{
		++i;
		while(s[i]>='0'&&s[i]<='9'&&i<s.size())a=a*10+s[i++]-'0';
		if(f)
		cout<<a-b;
		else
		cout<<a+b;
	}
	else
	{
		++i;
		while(s[i]>='0'&&s[i]<='9'&&i<s.size())b=b*10+s[i++]-'0';
		if(f)
		cout<<b-a;
		else
		cout<<a-b;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}

