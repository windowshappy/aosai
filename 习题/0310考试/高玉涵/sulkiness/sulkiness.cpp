#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,c,max=0,d;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		c=a+b;
		if(c>max&&c>8)
		{
			max=c;
			d=i;
		}
	}
	cout<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
