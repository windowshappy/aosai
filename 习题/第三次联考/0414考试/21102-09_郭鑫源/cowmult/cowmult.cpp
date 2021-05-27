#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
string s1,s2;
long long ans;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
    	for(int j=0;j<s2.size();j++)
    	{
    		ans+=((s1[i]-'0')*(s2[j]-'0'));
    	}
    }
    cout<<ans;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
