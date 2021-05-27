#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n;
	cin>>n;
	int sum1=1;
	int sum2=0;
	for(int i=1;i<=n;i++)
	{
		sum1=sum1*i;
		sum2+=sum1;
	}
	cout<<sum2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
