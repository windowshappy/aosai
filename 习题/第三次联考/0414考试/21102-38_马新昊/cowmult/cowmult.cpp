#include<iostream>
#include<cstdio>
using namespace std;
long long s1[100000001],s2[100000001];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	long long a,b,i=1,s,j=1,sum=0;
	cin>>a>>b;
	while(a!=0)
	{
		s1[i]=a%10;
		a=a/10;
		i++;
	}
	while(b!=0)
	{
		s2[j]=b%10;
		b=b/10;
		j++;
	}
	for(int x=1;x<=i;x++)
	{
		for(int z=1;z<=j;z++)
		{
			sum=sum+s1[x]*s2[z];
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
