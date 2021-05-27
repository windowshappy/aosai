#include<string>
#include<iostream>
#include<cstdio>
using namespace std;

long long ans=0;

int main()
{
	freopen("cowmult.in","w",stdin);
	freopen("cowmult.out","r",stdout);
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0; i<s1.size(); i++)
	{
		for(int j=0; j<s2.size(); j++)
		{
			ans+=(s1[i]-48)*(s2[j]-48);
		}
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
