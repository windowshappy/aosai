#include<iostream>
#include<cstdio>
using namespace std;
int x[15],y[15];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
    long long a,b,m=1,n=1,s=0;
    cin>>a>>b;
    while(a>0)
    {
    	x[m]=a%10;
    	a=a/10;
    	m++;
    }
    while(b>0)
    {
    	y[n]=b%10;
    	b=b/10;
    	n++;
    }
    for(int i=1;i<=m;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		s=s+x[i]*y[j];
    	}
    }
    cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
