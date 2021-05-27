#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
string a,b;
int c;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	for (int i=0;i<a.size();i++)
	{
		for (int j=0;j<b.size();j++)
		{
			c=c+int(a[i]-48)*int(b[j]-48);
		}
	}	
	cout<<c;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
