#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int n,x;
	long long s=1;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		s+=s*10; 
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
