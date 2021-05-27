#include<iostream>
#include<cstdio>
using namespace std;
int n,a[100000],b[100000],g[100000],k[100000],x,y,i,j,o,q;
int maxn=0,ma=0;
int main()
{
	fropen("carpet.in","r",stdin);
	fropen("carpet.in","w",stdout);
	
	cin>>n;
	for(i=0;i<n;++i)
	  {
	  	cin>>a[i]>>b[i]>>g[i]>>k[i];
	  	if(a[i]+g[i]>maxn)maxn=a[i]+g[i];
	  	if(b[i]+k[i]>ma)ma=b[i]+k[i];
	  }
	int s[maxn+1][ma+1];
	cin>>x>>y;
	for(i=0;i<=maxn;++i)
	for(j=0;j<=ma;++j)
	s[i][j]=-1;
	for(i=0;i<n;++i)
	  {
	  	for(o=0;o<g[i];++o)
	  	for(q=0;q<k[i];++q)
	  	s[a[i]+o][b[i]+q]=i+1;
	  }
	cout<<s[x][y];
	
	fclose(stdin);fclose(stdout);
	return 0;
}
