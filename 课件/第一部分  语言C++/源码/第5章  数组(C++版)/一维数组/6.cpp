#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int a[10010];

int main()
{
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout); 
	int l,m,x,y,n;
	cin>>l>>n;
	for (int i=0;i<=l;i++)a[i]=1;
	for (int i=1;i<=n;i++)
	{
	  	cin>>x>>y;
	  	for (int j=x;j<=y;j++)a[j]=0;
	}
	int ans=0;
	for (int i=0;i<=l;i++)if (a[i]==1)ans++;
	cout<<ans<<endl;
	return 0;
}
