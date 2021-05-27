#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n;
	int x[102][102];
	int a,b,g,k;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>g>>k;
		for(int j=a;j<=a+g;j++)
		{
			for(int h=b;h<=b+k;h++)
			{
				x[j][h]=i;
			}
		}
	}
	int e,f;
	cin>>e>>f;
	if(x[e][f]>0) cout<<x[e][f];
	else cout<<-1;
	fclose(stdin);fclose(stdout);
	return 0;
}
