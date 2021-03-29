#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b;
	int max=-100;
	int sum=0;
	int s=0;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		sum=a+b;
		if(sum>=8)
		{
			if(sum>max)
			{
				max=sum;
				s=i;
			}
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
