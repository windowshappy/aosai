#include<iostream>
#include<cstdio>
using namespace std;
long long s[15500][15500];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	long long n,a,b,g,k,x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>g>>k;
		for(int j=a;j<=a+g;j++)
		{
			for(int z=b;z<=b+k;z++)
			{
				s[j][z]++;
			}
		}
	}
	cin>>x>>y;
	if(s[x][y]==0)
	{
		cout<<-1;
	}else
	{
		cout<<s[x][y];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
