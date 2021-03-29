#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x;
	cin>>x;
	int n;
	cin>>n;
	int a;
	int sum=1;
	for(int i=1;i<=n;i++)
	{
		sum=sum+sum*x; 
	}
	cout<<sum<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
