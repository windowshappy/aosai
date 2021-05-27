#include<iostream>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,s=0,n=0;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		s=a+b;
		if(s>8)
		{
		  cout<<i;
		  return 0;
		}
	}
	cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
