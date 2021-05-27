#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int oo[10001][10001];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,i,a,b,g,k,i1,i2;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>g>>k;
		for(i1=a;i1<=a+g;i1+=1)
		{
			for(i2=b;i2<=b+k;i2+=1)
			{
				oo[i1][i2]=i;
			}
		}
	}
	int x,y;
	cin>>x>>y;
	if(oo[x][y]==0)
	  {
	  	cout<<-1;
	  }
	else
	  {
	  	cout<<oo[x][y];
	  }
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
