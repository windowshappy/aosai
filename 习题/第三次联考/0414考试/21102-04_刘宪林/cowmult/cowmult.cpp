#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
char c1[100],c2[100];
int ans,len1,len2;

int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>c1>>c2;
	len1=strlen(c1);
	len2=strlen(c2);
	for(int i=0;i<len1;++i)
	{
		for(int j=0;j<len2;++j)
		{
			ans+=(c1[i]-'0')*(c2[j]-'0');
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
