#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,s=0,i,c=0;
	for(i=1;i<=7;i++)
	{
		cin>>a>>b;
		if((a+b>8)&&(a+b>c))
		{
			c=a+b;
			s=i;
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
