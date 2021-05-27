#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("math.in","r",stdin);
    freopen("math.out","w",stdout);
	int n;
	cin>>n;
	int s=1;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		s=s*i;
		sum=sum+s;
	}
	cout<<sum<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
