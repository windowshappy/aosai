#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int h,a,b,t;
	h=a+b;
	int sum;
	sum=0;
	t=0;
	for(int i=1; i<=7; i++)
	{
		h=a+b;
		if(h>8)
		  sum+=1;
		  t+1;
		else
		  sum=0;
		cout<<sum;
	}
	int maxn;
	maxn=-1;
	for(int x=1; x<=t; x++)
	{
		maxn=sum;
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
