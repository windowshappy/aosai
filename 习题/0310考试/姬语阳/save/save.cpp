#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int sum=0,zb=0;
	for(int i=1;i<=12;i++)
	{
		sum+=300;
		int a;cin>>a;
		sum-=a;
		if(sum<0)
		{
			printf("-%d",i);
			return 0;
		}
		zb+=sum/100;
		sum%=100;
	}
	cout<<sum+zb*120;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
