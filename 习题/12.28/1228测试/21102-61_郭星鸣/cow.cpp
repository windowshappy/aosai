#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x;
	int n;
	cin>>x>>n;
	int b;
	b=0;
	int a;
	a=0;
	int sum;
	sum=0;
	for(int i=1; i<=n; i++)
	{
		b=1+x;
	}
		a=b*x+b;
		sum+=a;
	
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
