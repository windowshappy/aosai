#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n;
	cin>>n;
	int s;
	int a;
	a=0;
	int sum;
	sum=0;
	for(int i=2; i<=n; i++)
	{
		a=i*(i-1);
		sum=sum+a;
	}
	s=sum+1;
	cout<<s;
    fclose(stdin);
	fclose(stdout);
	return 0;
}
