#include<iostream>
#include<cstdio>
using namespace std;
int m[10001][10001];
int main()
{
	freopen("carpet.in","r",stdin);
    freopen("carpet.out","w",stdout);
	int n,a,b,g,k,x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	   cin>>a>>b>>g>>k;
	   m[a][b]++;
	   for(int j=1;j<=g;j++)
	   {
	   	m[a+j][b]++;
		for(int q=1;q<=k;q++)
	   {
	   	m[a+j][b+q]++;
	   }
	   }  
	}
	for(int i=1;i<=k;i++)
	{
		m[a][b+i]++;
	}
	cin>>x>>y;
	if(m[x][y]==0)
	{
		cout<<"-1";
	}
    else
    {
    	cout<<m[x][y];
    }
    fclose(stdin);fclose(stdout);
	return 0;
}
