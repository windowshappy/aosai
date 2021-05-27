#include<iostream>
#include<cstdio>
using namespace std;
long long a,b,ans;
int a1[1001],b1[1001],i=1,k=1;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	while(a!=0)
	{
		a1[i]=a%10;
		a/=10;
		i++;
	}
	while(b!=0)
	{
		b1[k]=b%10;
		b/=10;
		k++;
	}
	for(int j=1;j<=i;j++)
	{
		for(int x=1;x<=k;x++)
		{
			ans+=a1[j]*b1[x];
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
