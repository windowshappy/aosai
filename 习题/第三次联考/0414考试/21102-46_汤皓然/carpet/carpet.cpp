#include<iostream>
#include<cstdio>
using namespace std;
int a[10005],b[10005],g[10005],k[10005];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int i,n,x,y,q,s=-1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	cin>>x>>y;
	for(q=1;q<=n;q++)
	{
		if( x>=a[q] && x<=a[q]+g[q] && y>=b[q] &&y<=b[q]+k[q] )
			s=q;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
