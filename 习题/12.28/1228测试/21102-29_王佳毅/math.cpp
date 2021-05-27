#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n,sum=1;
	long long js=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    sum*=i;
	    js+=sum;
	}
	cout<<js;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
