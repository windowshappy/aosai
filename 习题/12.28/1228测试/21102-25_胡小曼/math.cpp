#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	long long s=0,c=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		c=c*i;
		s=s+c;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
