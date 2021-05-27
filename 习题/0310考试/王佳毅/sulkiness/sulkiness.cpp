#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,sum=0,max=-1000,js;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		if(a+b<=8)
		{
			sum++;
		}
		if(a+b>8)
		{
			if(a+b>max)
			{
				js=i;
				max=a+b;
			}
		}
	}
	if(sum==7)
	{
		cout<<"0";
	}
	else
	{
		cout<<js;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
