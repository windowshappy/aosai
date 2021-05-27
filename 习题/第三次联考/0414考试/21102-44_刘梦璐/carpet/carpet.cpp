#include<iostream>
#include<cstdio>
using namespace std;
bool s[16][16];
int t[16][16];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n;
	cin>>n;
	int a[n+1],b[n+1],x[n+1],y[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>x[i]>>y[i];
		for(int j=a[i];j<=a[i]+x[i];j++)
		{
			for(int l=b[i];l<=b[i]+y[i];l++)
			{
				s[j][l]=1;
				t[j][l]=i;
			}
		}
	}
	int x1,y1;
	cin>>x1>>y1;
	if(t[x1][y1]!=0)
		cout<<t[x1][y1];
	else
		cout<<"-1";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
