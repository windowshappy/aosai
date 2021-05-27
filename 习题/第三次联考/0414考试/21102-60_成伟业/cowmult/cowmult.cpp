#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[10000],p[10000];
long long ans=0;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>s>>p;
	int s1=strlen(s),p1=strlen(p);
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<p1;j++)
		{
			ans+=(s[i]-'0')*(p[j]-'0');
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
