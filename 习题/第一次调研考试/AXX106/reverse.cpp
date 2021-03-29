#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int n,s=0;
	cin>>n;
	while(n)
	{
		s=s*10+n%10;
		n=n/10;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
