#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a,b;
	cin>>a>>b;
	int z=1000;
	int num=0,ans=0;
	for(int i=a;i<=b;i++)
	{
		num=0;
		z=1000;
		if(i%100>31)
		{
			i=i+100-(i%100)+1;
		}
		if(i/100%100>12)
		{
			i=i+10000-(i%10000)+101;
		}
		int c=i/10000;
		for(int j=1;j<=4;j++)
		{
			int d=c%10;
			num+=d*z;
			z/=10;
			c/=10;
		}
		if(num==i%10000) ans++;
	}
	cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}
