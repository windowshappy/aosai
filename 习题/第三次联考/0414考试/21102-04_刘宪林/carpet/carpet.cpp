#include<iostream>
#include<cstdio>
	
using namespace std;
	
int n;
int a[10001][4];
int xx,yy;

int main()
{	
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
	}
	cin>>xx>>yy;
	for(int i=n;i>=1;--i)
	{
		if(xx>=a[i][0] && a[i][1]<=yy && xx<=(a[i][0]+a[i][2]) && yy<=(a[i][1]+a[i][3]))
		{
			cout<<i;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
	}
	cout<<"-1";
	fclose(stdin);
	fclose(stdout);
	return 0;
}	
